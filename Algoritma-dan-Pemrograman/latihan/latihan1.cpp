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
