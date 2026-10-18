#include <iostream>
#include "Singlylist.h"
using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5;
    createList(L);

    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    cout << "List awal: ";
    printInfo(L);

    // Soal 2: hapus node 9 dengan deleteFirst()
    address Hapus;
    deleteFirst(L, Hapus);
    dealokasi(Hapus);

    // Hapus node 2 dengan deleteLast()
    deleteLast(L, Hapus);
    dealokasi(Hapus);

    // Hapus node 8 dengan deleteAfter(), yaitu node setelah 12
    address Prec = L.first; // node 12
    deleteAfter(L, Prec, Hapus);
    dealokasi(Hapus);

    cout << "List setelah penghapusan: ";
    printInfo(L);
    cout << "Jumlah node : " << nbList(L) << endl;

    deleteList(L);
    cout << "- List Berhasil Terhapus -" << endl;
    cout << "Jumlah node : " << nbList(L) << endl;

    return 0;
}
