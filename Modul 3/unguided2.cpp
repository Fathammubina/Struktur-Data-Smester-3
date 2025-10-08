#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan jumlah elemen array (N): ";
    cin >> N;

    int *arr = new int[N]; 
    int *ptr = arr;        

    cout << "Masukkan " << N << " bilangan:\n";
    for (int i = 0; i < N; i++) {
        cout << "Bilangan ke-" << i + 1 << ": ";
        cin >> *(ptr + i); 
    }

    int jumlah = 0;
    int maks = *ptr;
    int min = *ptr;

    for (int i = 0; i < N; i++) {
        int nilai = *(ptr + i);
        jumlah += nilai;
        if (nilai > maks) maks = nilai;
        if (nilai < min) min = nilai;
    }

    cout << "\nHasil perhitungan:\n";
    cout << "Jumlah semua bilangan : " << jumlah << endl;
    cout << "Nilai maksimum        : " << maks << endl;
    cout << "Nilai minimum         : " << min << endl;

    delete[] arr; 
    return 0;
}
