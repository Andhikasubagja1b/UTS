#include <iostream>
using namespace std;


double tambah(double a, double b) {
    return a + b;
}


double kurang(double a, double b) {
    return a - b;
}


double kali(double a, double b) {
    return a * b;
}

double bagi(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Pembagian dengan nol!" << endl;
        return 0;
    }
}

int main() {
    int pilihan;
    double operand1, operand2, hasil;

    cout << "Pilih operasi matematika:\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "Masukkan pilihan (1-4): ";
    cin >> pilihan;

    cout << "Masukkan dua angka (operand): ";
    cin >> operand1 >> operand2;

    switch (pilihan) {
        case 1:
            hasil = tambah(operand1, operand2);
            cout << "Hasil dari Penjumlahan untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;
            break;
        case 2:
            hasil = kurang(operand1, operand2);
            cout << "Hasil dari Pengurangan untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;
            break;
        case 3:
            hasil = kali(operand1, operand2);
            cout << "Hasil dari Perkalian untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;
            break;
        case 4:
            hasil = bagi(operand1, operand2);
            cout << "Hasil dari Pembagian untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}
