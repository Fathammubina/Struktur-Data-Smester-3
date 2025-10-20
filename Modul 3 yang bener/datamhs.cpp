#include <iostream>
#include <cstring>
#include "datamhs.h"
using namespace std;

void inputMhs(Mahasiswa &m) {
    cout << "Nama   : ";
    cin.ignore();
    cin.getline(m.nama, 30);
    cout << "NIM    : ";
    cin.getline(m.nim, 15);
    cout << "UTS    : ";
    cin >> m.uts;
    cout << "UAS    : ";
    cin >> m.uas;
    cout << "Tugas  : ";
    cin >> m.tugas;

    m.nilaiAkhir = hitungNilaiAkhir(m.uts, m.uas, m.tugas);
}

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

void tampilMhs(Mahasiswa m) {
    cout << m.nim << "\t" << m.nama << "\t\t" << m.nilaiAkhir << endl;
}
