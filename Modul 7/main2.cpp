#include <iostream>
#include "stack2.h"
using namespace std;

int main() {
    cout << "Program Stack Modul 07" << endl;

    Stack S;
    createStack(S);

    // UJI 1
    cout << "\n=== Tugas 1 ===" << endl;
    push(S, 3);
    push(S, 4);
    push(S, 8);
    pop(S);
    push(S, 2);
    push(S, 3);
    pop(S);
    push(S, 9);

    printInfo(S);
    cout << "Balik stack:" << endl;
    balikStack(S);
    printInfo(S);

   // UJI 2
    cout << "\n=== Tugas 2: pushAscending ===" << endl;
    createStack(S);
    pushAscending(S,3);
    pushAscending(S,4);
    pushAscending(S,8);
    pushAscending(S,2);
    pushAscending(S,3);
    pushAscending(S,9);

    printInfo(S);
    cout << "Balik stack:" << endl;
    balikStack(S);
    printInfo(S);

    // UJI 3
    cout << "\n=== Tugas 3: getInputStream ===" << endl;
    createStack(S);
    getInputStream(S);

    cout << "Isi stack:" << endl;
    printInfo(S);

    cout << "Balik stack:" << endl;
    balikStack(S);
    printInfo(S);

    return 0;
}
