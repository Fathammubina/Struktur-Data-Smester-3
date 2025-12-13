#include <iostream>
using namespace std;

void pola(int n) {
    for (int i = 1; i <= n; i++) {       // baris
        for (int j = 1; j <= i; j++) {   // kolom
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "input angka: ";
    cin >> n;

    pola(n); 

    return 0;
}
