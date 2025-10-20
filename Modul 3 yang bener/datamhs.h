#ifndef DATAMHS_H_INCLUDED
#define DATAMHS_H_INCLUDED

struct Mahasiswa {
    char nama[30];
    char nim[15];
    float uts, uas, tugas, nilaiAkhir;
};

// Deklarasi fungsi dan prosedur
void inputMhs(Mahasiswa &m);
float hitungNilaiAkhir(float uts, float uas, float tugas);
void tampilMhs(Mahasiswa m);

#endif
