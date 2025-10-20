#include <iostream>
#include "array2d.h"
using namespace std;

int main() {
    int A[SIZE][SIZE] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[SIZE][SIZE] = {{9,8,7},{6,5,4},{3,2,1}};

    cout << "Array A sebelum ditukar:\n";
    printArray(A);
    cout << "\nArray B sebelum ditukar:\n";
    printArray(B);

    tukarPosisi(A, B, 1, 1); // posisi tengah

    cout << "\nSetelah menukar elemen [1][1]:\n";
    cout << "Array A:\n"; printArray(A);
    cout << "Array B:\n"; printArray(B);

    int x = 10, y = 20;
    int *p1 = &x, *p2 = &y;

    cout << "\nSebelum tukar pointer:\n";
    cout << "x = " << x << ", y = " << y << endl;

    tukarPointer(p1, p2);

    cout << "Setelah tukar pointer:\n";
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
