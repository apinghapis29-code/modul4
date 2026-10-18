# <h1 align="center">Laporan Praktikum Modul 3 - Abstrak Data Type Bahas C++ </h1>
<p align="center">Daffa Arief Wicaksono - 109082500192</p>

## Dasar Teori
Dalam pemrograman, data perlu disusun dan dikelola supaya lebih mudah digunakan. Salah satu konsep yang dapat digunakan adalah Abstract Data Type (ADT). ADT menggabungkan definisi suatu tipe data dengan operasi yang dapat dilakukan terhadap data tersebut. Dengan konsep ini, programmer dapat mengatur data dan fungsi yang berkaitan agar program lebih terstruktur [1].

### A. Abstract Data Type (ADT)<br/>
Abstract Data Type atau ADT merupakan konsep yang menjelaskan bentuk suatu data beserta operasi yang bisa digunakan untuk mengolahnya. Setiap ADT mempunyai tipe data dan operasi tertentu sesuai dengan kebutuhan. Konsep ini dapat diterapkan untuk berbagai jenis data, misalnya data mahasiswa yang terdiri dari NIM dan nilai [1].
#### 1. ADT digunakan untuk mengelompokkan data dan menyediakan operasi yang berhubungan dengan data tersebut. Contohnya, data mahasiswa dapat dibuat dalam satu tipe data yang berisi NIM serta dua nilai mata kuliah. Data tersebut kemudian dapat diproses menggunakan fungsi untuk menerima masukan atau menghitung nilai rata-rata. Dengan begitu, pengolahan data dapat dilakukan melalui fungsi yang sesuai dengan kegunaannya [1].

#### 2. Komponen dan Operasi ADT
Dalam ADT terdapat beberapa operasi dengan tugas yang berbeda. Konstruktor digunakan untuk membuat nilai atau objek, sedangkan selector berfungsi mengambil bagian data tertentu. Ada juga operasi untuk mengubah nilai dan memeriksa apakah data sesuai dengan ketentuan. Selain itu, ADT dapat menyediakan operasi untuk memasukkan dan menampilkan data, membandingkan nilai, melakukan perhitungan, mengubah tipe data, serta membebaskan memori yang digunakan oleh objek [1].


#### 3. Kegunaan ADT

ADT membantu programmer mengelompokkan data dan operasi yang saling berhubungan. Pengelompokan tersebut membuat susunan kode lebih jelas sehingga program lebih mudah dipahami dan diperbaiki. Selain itu, operasi yang telah dibuat dapat dipanggil kembali ketika dibutuhkan dalam bagian program lainnya [1].

### B.  Penerapan ADT pada Bahasa C++<br/>
Bahasa C++ dapat digunakan untuk menerapkan ADT dengan membuat tipe data dan fungsi yang mengelola data tersebut. Berdasarkan modul praktikum, penerapan ADT dilakukan dengan membagi program menjadi file header (.h), file implementasi (.cpp), dan file utama yang berfungsi sebagai driver [1].

#### 1. pembuatn tipe data menggunakan struct
Pada bahasa c++, sturct digunakan untuk menggabungkan beberapa variabel ke dalam satu kelompok.Misalnya,struktur mahsiswa dapet berisi NIM,nilai pertama dan nilai kedua,seluruhh komponen teersebut dapat disimpan dalam satu variabel bertipe mahasiswa,sehingga data yang berkaitan dapat dikelola bersama[1].

#### 2. Fungsi file header dan fungsi implementasi
file header(.h)di gunakan untuk menuliskan deklarasi tipe data serta fungsi yang tersedia.Adapun file implementasi(.cpp)bersi kode yang menjalnkan fungsi-fungsi tersebut.Pembagian ini membuat bagian yang menjelaskan fungsi dan bagian yang berisi proses kerjanya tersimpan secara terpisah,dengan demikian ,susunan program menjadi lebih teratur dan lebih mudah di kembangkan[1]

#### 3. Peran File Program Utama
File program utama atau driver digunakan untuk menjalankan program dengan memanfaatkan ADT yang sudah dibuat. Dalam C++, proses tersebut dilakukan melalui fungsi main(). File utama dapat memanggil fungsi yang sudah dideklarasikan pada file header dan diimplementasikan dalam file .cpp. Sebagai contoh, program utama dapat memanggil fungsi untuk memasukkan data mahasiswa, kemudian menggunakan fungsi lainnya untuk menghitung dan menampilkan nilai rata-rata [1].

## Guided 

### 1. pelajaran.cpp

```C++
#include <iostream>
#include "pelajaran.h"
using namespace std;

pelajaran create_pelajaran(string namapel, string kodepel){
    pelajaran p;
    p.namaMapel = namapel;
    p.kodeMapel = kodepel;
    return p;
}

void tampil_pelajaran(pelajaran pel){
    cout << "nama pelajaran : " << pel.namaMapel << endl;
    cout << "nilai : " << pel.kodeMapel << endl;
}
```
Kode ini berfungsi untuk membuat data pelajaran yang berisi nama dan kode pelajaran. Fungsi create_pelajaran() digunakan untuk mengisi kedua data tersebut, sedangkan tampil_pelajaran() bertugas menampilkan nama dan kode pelajaran ke layar menggunakan cout.

### 2. pelajaran.h

```C++
#ifndef PELAJARAN_H_INCLUDED
#define PELAJARAN_H_INCLUDED
#include <string>
using namespace std;

struct pelajaran{
    string namaMapel;
    string kodeMapel;
};

pelajaran create_pelajaran(string namapel, string kodepel);
void tampil_pelajaran(pelajaran pel);

#endif 
```
File ini berfungsi untuk menyimpan data nama dan kode pelajaran. Bagian struct pelajaran digunakan untuk mengatur data tersebut, sedangkan fungsi create_pelajaran() dan tampil_pelajaran() digunakan untuk membuat dan menampilkan data pelajaran.

### 3. main.cpp

```C++
#include <iostream>
#include "mahasiswa.h"

using namespace std;

int main(){
  mahasiswa mhs;
  inputMHS (mhs) ;
  cout << "rata rata = " << rata2 (mhs);
  return 0;
}
```
Kode ini digunakan untuk mengisi data mahasiswa melalui fungsi inputMHS(), lalu menghitung dan menampilkan nilai rata-rata mahasiswa menggunakan fungsi rata2(). Setelah itu, program selesai dijalankan.

## Unguided 

### 1. (Buat program yang dapat menyimpan data mahasiswa (max. 10) ke dalam sebuah array dengan field nama, nim, uts, uas, tugas, dan nilai akhir. Nilai akhir diperoleh dari FUNGSI dengan rumus 0.3*uts+0.4*uas+0.3*tugas.)

### 1.latihan1.h

```C++
#ifndef latihan1_H_INCLUDED
#define latihan1_H_INCLUDED
#include <string>
using namespace std;

struct mahasiswa{
  string nama;
  string nim;
  int uts,uas,tugas;
  float nilaiakhir;
};

void inputmhs(mahasiswa &m);
void tampilmhs(mahasiswa  m);
float hitungnilaiakhir(mahasiswa m);

#endif
```

### 2. mahasiswa.cpp

```C++
#ifndef latihan1_H_INCLUDED
#define latihan1_H_INCLUDED
#include <string>
using namespace std;

struct mahasiswa{
  string nama;
  string nim;
  int uts,uas,tugas;
  float nilaiakhir;
};

void inputmhs(mahasiswa &m);
void tampilmhs(mahasiswa  m);
float hitungnilaiakhir(mahasiswa m);

#endif

```

### 3. main.cpp

```C++
#include <iostream>
#include "latihan1.h"
using namespace std;

int main(){
    mahasiswa data[10];
    int n;

    cout << "jumlah mahasiswa (maks 10): ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        inputmhs(data[i]);
    }

    cout << "\n=== Data Mahasiswa ===" << endl;
    for(int i = 0; i < n; i++){
        tampilmhs(data[i]);
    }
    return 0;
}
```

### Output Unguided 1 :

##### Output 1
![output1](https://github.com/daffaarief55-glitch/109082500192_Daffa-Areif-Wicaksono3/blob/main/modul3/output_unguided/output1.png?raw=true)



kita belajar membuat program untuk menyimpan dan menampilkan data mahasiswa menggunakan struct dan array. Program juga menghitung nilai akhir mahasiswa berdasarkan nilai UTS, UAS, dan tugas dengan rumus yang sudah ditentukan.

### 2. ( Buatlah ADT pelajaran sebagai berikut di dalam file “pelajaran.h”:
Type pelajaran <
namaMapel : string
kodeMapel : string
>
function create_pelajaran( namapel : string,
 kodepel : string ) → pelajaran
procedure tampil_pelajaran( input pel : pelajaran )
Buatlah implementasi ADT pelajaran pada file “pelajaran.cpp”
Cobalah hasil implementasi ADT pada file “main.cpp”
using namespace std;
int main(){
string namapel = "Struktur Data";
string kodepel = "STD";
pelajaran pel = create_pelajaran(namapel,kodepel);
tampil_pelajaran(pel);
return 0;
}

### 1.mai.cpp
```C++
#include <iostream>
#include <string>
#include "pelajaran.h"
using namespace std;

int main(){
    string namapel = "Struktur Data";
    string kodepel = "STD";
    pelajaran pel = create_pelajaran(namapel, kodepel);
    tampil_pelajaran(pel);

    return 0;
}
```

### 2. mahasiswa.h

```C++
#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED
struct mahasiswa{
  char nim[10];
  int nilai1,nilai2;
};

void inputMHS (mahasiswa &m) ;
float rata2 (mahasiswa m);
#endif

```

### 3. mahasiswa.cpp

```C++
#include <iostream>
#include "mahasiswa.h"

using namespace std;
void inputMHS(mahasiswa &m){
  cout << "input nama =";
  cin >> (m).nim;
  cout << "input nilai";
  cin >> (m).nilai1;
 cout <<" input nilai2 =";
 cin >> (m).nilai2;
}

float rata2(mahasiswa m){
  return float(m.nilai1+m.nilai2)/2;
};

```

### Output Unguided 2 :

##### Output 1
![output2](https://github.com/daffaarief55-glitch/109082500192_Daffa-Areif-Wicaksono3/blob/main/modul3/output_unguided/output2.png?raw=true)


Pada soal ini, kita diminta membuat program untuk menyimpan nama dan kode mata pelajaran. Program dibuat dalam tiga file, yaitu pelajaran.h untuk membuat struktur data, pelajaran.cpp untuk mengisi fungsi, dan main.cpp untuk menjalankan program. Contohnya, mata pelajaran Struktur Data memiliki kode STD.

### 3. (. Buatlah program dengan ketentuan :
- 2 buah array 2D integer berukuran 3x3 dan 2 buah pointer integer
- fungsi/prosedur yang menampilkan isi sebuah array integer 2D
- fungsi/prosedur yang akan menukarkan isi dari 2 array integer 2D pada posisi tertentu
STRUKTUR DATA 35
- fungsi/prosedur yang akan menukarkan isi dari variabel yang ditunjuk oleh 2 buah
pointer)

### 1.matriks.h

```C++
#ifndef MATRIKS_H_INCLUDED
#define MATRIKS_H_INCLUDED

void tampilArray(int arr[3][3]);
void tukarArray(int a[3][3], int b[3][3], int baris, int kolom);
void tukarPointer(int *p1, int *p2);

#endif 
```

### 2. matriks.cpp

```C++
#include <iostream>
#include "matriks.h"
using namespace std;

void tampilArray(int arr[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarArray(int a[3][3], int b[3][3], int baris, int kolom){
    int temp = a[baris][kolom];
    a[baris][kolom] = b[baris][kolom];
    b[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
```

### 3.main.cpp

```C++
#include <iostream>
#include "matriks.h"
using namespace std;

int main(){
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int x = 10, y = 20;
    int *p1 = &x;
    int *p2 = &y;

    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "Array B:" << endl;
    tampilArray(B);

    cout << "\nTukar A[1][2] dengan B[1][2]" << endl;
    tukarArray(A, B, 1, 2);
    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "Array B:" << endl;
    tampilArray(B);

    cout << "\nSebelum tukar pointer: x = " << x << ", y = " << y << endl;
    tukarPointer(p1, p2);
    cout << "Sesudah tukar pointer: x = " << x << ", y = " << y << endl;

    return 0;
}
```
### Output Unguided 3 :

##### Output 1
![output3](https://github.com/daffaarief55-glitch/109082500192_Daffa-Areif-Wicaksono3/blob/main/modul3/output_unguided/output3.png?raw=true)


kita mempelajari cara memakai array dua dimensi dan pointer di C++. Program digunakan untuk menampilkan isi array, menukar nilai dari dua array pada posisi yang dipilih, dan menukar nilai dua variabel dengan bantuan pointer.

## Kesimpulan
Dari ketiga soal tersebut, kita belajar dasar pemrograman C++ seperti penggunaan struct, array, ADT, dan pointer. Kita juga belajar cara menyimpan data, menampilkan data, menghitung nilai akhir, dan menukar nilai variabel. Tugas ini membantu kita memahami penggunaan fitur-fitur tersebut dalam membuat program.
## Referensi
[1] Tim Penyusun. (t.t.). Modul 3: Abstract Data Type (ADT). Buku Ajar Praktikum Struktur Data, hlm. 32–35. (Modul praktikum yang diberikan pada perkuliahan).
<br>...
