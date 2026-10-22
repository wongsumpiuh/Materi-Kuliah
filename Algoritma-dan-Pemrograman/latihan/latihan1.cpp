/*
SOAL LATIHAN :

Buat Latihan untuk @semua  : 
Silakan kerjakan soal berikut secara mandiri dan kirimkan jawaban melalui balasan (reply) pada thread ini! 
1. Temukan minimal 3 bug pada program. 
2. Identifikasi variabel yang tipe datanya kurang tepat atau berpotensi menimbulkan masalah.
3. Jelaskan perbedaan penggunaan int, double, dan string pada program tersebut.
4. Perbaiki program tanpa mengubah struktur utamanya.
5. Buktikan hasil perbaikan dengan menghitung nilai secara manual dan membandingkannya dengan keluaran program.


#include <iostream>
#include <string>
using namespace std;


int main() {
    string namaMahasiswa = "Andi";
    int NIM = 231001;
    string mataKuliah = "Algoritma dan Pemrograman";


    int nilaiTugas = 85;
    int nilaiUTS = 78;
    int nilaiUAS = 90;


    int bobotTugas = 20;
    int bobotUTS = 30;
    int bobotUAS = 50;


    int nilaiAkhir =
        nilaiTugas * bobotTugas / 100
        + nilaiUTS * bobotUTS / 100
        + nilaiUAS * bobotUAS / 100;


    double rataRata = nilaiTugas + nilaiUTS + nilaiUAS / 3;


    cout << "Nama Mahasiswa : " << namaMahasiswa << endl;
    cout << "NIM            : " << NIM << endl;
    cout << "Mata Kuliah    : " << mataKuliah << endl;
    cout << "Nilai Tugas    : " << nilaiTugas << endl;
    cout << "Nilai UTS      : " << nilaiUTS << endl;
    cout << "Nilai UAS      : " << nilaiUAS << endl;
    cout << "Nilai Akhir    : " << nilaiAkhir << endl;
    cout << "Rata-rata      : " << rataRata << endl;


    return 0;
}

*/

/*
JAWABAN : 

**1\. Bug pada program**

- Rumus rata-rata salah karena kurang tanda kurung.
- `nilaiAkhir` memakai `int`, jadi angka desimal bisa hilang.
- Pembagian dengan `int` bisa membuat hasil desimal terpotong.

**2\. Variabel yang kurang tepat**

- `NIM` sebaiknya memakai `string` karena hanya sebagai nomor identitas.
- `nilaiAkhir` sebaiknya memakai `double` supaya bisa menyimpan angka desimal.

**3\. Perbedaan int, double, dan string**

- `int` untuk bilangan bulat.
- `double` untuk bilangan desimal.
- `string` untuk teks atau tulisan.

**4\. Perbaikan program**

- Mengubah tipe data `NIM` menjadi `string`.
- Mengubah `nilaiAkhir` menjadi `double`.
- Memperbaiki rumus rata-rata menjadi `(nilaiTugas + nilaiUTS + nilaiUAS) / 3.0`.

**5\. Perhitungan manual** Nilai akhir = (85 × 20/100) + (78 × 30/100) + (90 × 50/100) = **85,4**.

Rata-rata = (85 + 78 + 90) / 3 = **84,33**.

Jadi, setelah program diperbaiki, hasilnya sesuai dengan perhitungan manual dan tidak ada kesalahan pada rumusnya.

*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaMahasiswa = "Andi";
    string NIM = "231001";
    string mataKuliah = "Algoritma dan Pemrograman";

    int nilaiTugas = 85;
    int nilaiUTS = 78;
    int nilaiUAS = 90;

    double bobotTugas = 20;
    double bobotUTS = 30;
    double bobotUAS = 50;

    double nilaiAkhir =
        nilaiTugas * bobotTugas / 100
        + nilaiUTS * bobotUTS / 100
        + nilaiUAS * bobotUAS / 100;

    double rataRata =
        (nilaiTugas + nilaiUTS + nilaiUAS) / 3.0;

    cout << "Nama Mahasiswa : " << namaMahasiswa << endl;
    cout << "NIM            : " << NIM << endl;
    cout << "Mata Kuliah    : " << mataKuliah << endl;
    cout << "Nilai Tugas    : " << nilaiTugas << endl;
    cout << "Nilai UTS      : " << nilaiUTS << endl;
    cout << "Nilai UAS      : " << nilaiUAS << endl;
    cout << "Nilai Akhir    : " << nilaiAkhir << endl;
    cout << "Rata-rata      : " << rataRata << endl;

    return 0;
}
