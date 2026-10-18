#include <iostream>
#include "Singlylist.h"
using namespace std;

void createList(List &L) {
    L.first = nullptr;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = nullptr;
    return P;
}

void dealokasi(address &P) {
    if (P != nullptr) {
        delete P;
        P = nullptr;
    }
}

void printInfo(const List &L) {
    address P = L.first;
    while (P != nullptr) {
        cout << P->info;
        if (P->next != nullptr) cout << " ";
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List &L, address P) {
    if (P == nullptr) return;
    P->next = L.first;
    L.first = P;
}

void deleteFirst(List &L, address &P) {
    if (L.first == nullptr) {
        P = nullptr;
        return;
    }
    P = L.first;
    L.first = L.first->next;
    P->next = nullptr;
}

void deleteLast(List &L, address &P) {
    if (L.first == nullptr) {
        P = nullptr;
        return;
    }
    if (L.first->next == nullptr) {
        P = L.first;
        L.first = nullptr;
        return;
    }
    address Q = L.first;
    while (Q->next->next != nullptr) Q = Q->next;
    P = Q->next;
    Q->next = nullptr;
}

void deleteAfter(List &L, address Prec, address &P) {
    if (Prec == nullptr || Prec->next == nullptr) {
        P = nullptr;
        return;
    }
    P = Prec->next;
    Prec->next = P->next;
    P->next = nullptr;
}

int nbList(const List &L) {
    int jumlah = 0;
    address P = L.first;
    while (P != nullptr) {
        jumlah++;
        P = P->next;
    }
    return jumlah;
}

void deleteList(List &L) {
    address P;
    while (L.first != nullptr) {
        P = L.first;
        L.first = L.first->next;
        dealokasi(P);
    }
}
