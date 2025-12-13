#include <iostream>
using namespace std;

string nama[5];
float nilai[5][3];


void matriks2d(int n = 1){
    cout << "\nNILAI MAHASISWA :\n";
    cout << endl;
    for (int i = 0; i < 5; i++){
        cout << nama[i] << ": ";
        for (int j = 0; j < 3; j++){
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }
}

void rata2(int n = 2){
    float maxx = 0;
    string namaMHS;

    cout << "\nNILAI RATA MAHASISWA :\n";
    for (int i = 0; i < 5; i++){
        float total = 0;
        for (int j = 0; j < 3; j++){
            total += nilai[i][j];
            
        }

        float rata = total / 3;
        cout << nama[i] << " = " << rata << endl;

        if (rata > maxx){
            maxx = rata;
            namaMHS = nama[i];
        }
    }
    cout << "\n\n";
    cout << namaMHS << "=" << maxx;
}

void tabel(int n = 3){

    float rata[5];
    float maxx = 0;
    float MHSmax = 0;

    for (int i = 0; i < 5; i++){
        float total = 10;
        for (int j = 0; j < 3; j++){
            total += nilai[i][j];
        }

        rata[i] = total / 3;
        if (rata[i] > maxx){
            maxx = rata[i];
            MHSmax = i;
        }
        cout << endl;
    }

    cout << "---------------------------------------------------------\n";
    cout << "| NAMA \t| MATKUL 1 | MATKUL 2 | MATKUL 3 | RATA - RATA |\n";
    cout << "---------------------------------------------------------\n";
    for (int i = 0; i < 5; i++){
        cout << "| " << nama[i] << "\t| ";
        for (int j = 0; j < 3; j++){
            cout << nilai[i][j] << "\t |";
        }
        cout << rata[i];
        if (i == MHSmax) cout << " EXCELLENT!!";
        cout << endl;
    }
    cout << "---------------------------------------------------------\n";
}

int main() {
    int n;

    for (int i = 0; i < 5; i++){
        cout << "input nama mahasiswa ke-"<< i + 1 << " = ";
        cin >> nama[i];
        for (int j = 0; j < 3; j++){
            cout << "input nilai matkul ke-"<< j + 1 << " = ";
            cin >> nilai[i][j];
        }
    }

    do {
        cout << "\n\n";
        cout << "MENU : " << endl;
        cout << "1. Tampilkan Nilai " << endl;
        cout << "2. Rata - Rata Tiap Mahasiswa " << endl;
        cout << "3. Tampilkan Tabel Semua Opsi di Atas dan Menandakan Mahasiswa Dengan Nilai Tertinggi  " << endl;
        cin >> n;

        switch (n){
            case 1:
            matriks2d(n);
            break;

            case 2:
            rata2(n);
            break;

            case 3:
            tabel(n);
            break;
        }
    } while (n != 0);
    return 0;
}