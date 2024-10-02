
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    string npm;
    float nilaiAbsen, nilaiTugas, nilaiUTS, nilaiUAS;

    // Input data mahasiswa
    cout << "Masukkan Nama: ";
    getline(cin, nama);

    cout << "Masukkan NPM: ";
    getline(cin, npm);

    cout << "Masukkan Nilai Absen: ";
    cin >> nilaiAbsen;

    cout << "Masukkan Nilai Tugas: ";
    cin >> nilaiTugas;

    cout << "Masukkan Nilai UTS: ";
    cin >> nilaiUTS;

    cout << "Masukkan Nilai UAS: ";
    cin >> nilaiUAS;

    // Menghitung nilai akhir
    float nilaiAkhir = (0.1 * nilaiAbsen) + (0.2 * nilaiTugas) + (0.3 * nilaiUTS) + (0.4 * nilaiUAS);

    // Menentukan huruf mutu
    char hurufMutu;
    if (nilaiAkhir >= 85 && nilaiAkhir < 100) {
        hurufMutu = 'A';
    } else if (nilaiAkhir >= 80) {
        hurufMutu = 'B';
    } else if (nilaiAkhir >= 75) {
        hurufMutu = 'C';
    } else if (nilaiAkhir >= 70) {
        hurufMutu = 'D';
    } else {
        hurufMutu = 'E';
    }

    // Menampilkan hasil
    cout << "\n===== Hasil Nilai Mahasiswa =====\n";
    cout << "Nama: " << nama << endl;
    cout << "NPM: " << npm << endl;
    cout << "Nilai Absen: " << nilaiAbsen << endl;
    cout << "Nilai Tugas: " << nilaiTugas << endl;
    cout << "Nilai UTS: " << nilaiUTS << endl;
    cout << "Nilai UAS: " << nilaiUAS << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Huruf Mutu: " << hurufMutu << endl;

    return 0;
}
