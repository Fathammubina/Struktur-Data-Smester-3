#include <iostream>
#include "datamhs.h"
using namespace std;

int main() {
    Mahasiswa data[10];
    int n;

    cout << "Masukkan jumlah mahasiswa (maks 10): ";
    cin >> n;
    if (n > 10) n = 10;

    for (int i = 0; i < n; i++) {
        cout << "\nData mahasiswa ke-" << i + 1 << endl;
        inputMhs(data[i]);
    }

    cout << "\n==============================================\n";
    cout << "DAFTAR NILAI MAHASISWA\n";
    cout << "==============================================\n";
    cout << "No\tNIM\t\tNama\t\tNilai Akhir\n";
    cout << "----------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << i + 1 << "\t";
        tampilMhs(data[i]);
    }

    return 0;
}
