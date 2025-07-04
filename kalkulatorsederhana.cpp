#include <iostream>

using namespace std;

int main()
{
    double angka1, angka2;
    int operasi;

    // Fungsi untuk memasukkan Angka 1
    cout << "Masukkan Angka 1: " << endl;
    cin >> angka1;
    // Fungsi Untuk Memilih Operasi
    cout << " Kalkulator Sederhana" << endl;
    cout << "1. + " << endl;
    cout << "2. - " << endl;
    cout << "3. * " << endl;
    cout << "4. / " << endl;
    cout << "Pilih Operasi (1-4)" << endl;
    cin >> operasi;
    // Fungsi untuk memasukkan Angka 2
    cout << "Masukkan Angka 2: " << endl;
    cin >> angka2;

    switch (operasi)
    {
    case 1:
        cout << "Hasil: " << angka1 + angka2 << endl;
        break;
    case 2:
        cout << "Hasil: " << angka1 - angka2 << endl;
        break;
    case 3:
        cout << "Hasil: " << angka1 * angka2 << endl;
        break;
    case 4:
        if (angka2 != 0)
            cout << "Hasil: " << angka1 / angka2 << endl;
        else
            cout << "Error: Bilangan Tidak Dapat Dibagi" << endl;
        break;
    default:
        cout << "Operasi Tidak Dapat Ditemukan" << endl;
    }
    return 0;
}