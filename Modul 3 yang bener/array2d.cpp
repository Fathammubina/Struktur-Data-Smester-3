#include <iostream>
#include "array2d.h"
using namespace std;

void printArray(int A[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarPosisi(int A[SIZE][SIZE], int B[SIZE][SIZE], int x, int y) {
    int temp = A[x][y];
    A[x][y] = B[x][y];
    B[x][y] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
