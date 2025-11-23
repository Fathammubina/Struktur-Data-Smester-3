#include <iostream>
#include "queue2.h"
using namespace std;

void createQueue(Queue &Q) {
    Q.head = 0;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    return Q.tail < Q.head;
}

bool isFullQueue(Queue Q) {
    return Q.tail == 4;
}

void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        if (Q.head > 0) {
            int j = 0;
            for (int i = Q.head; i <= Q.tail; i++) {
                Q.info[j++] = Q.info[i];
            }
            Q.tail = Q.tail - Q.head;
            Q.head = 0;
        } else {
            cout << "Queue penuh!\n";
            return;
        }
    }

    Q.tail++;
    Q.info[Q.tail] = x;
}

infotype dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong!\n";
        return -1;
    }

    infotype x = Q.info[Q.head];
    Q.head++;

    if (Q.head > Q.tail) {
        Q.head = 0;
        Q.tail = -1;
    }

    return x;
}

void printInfo(Queue Q) {
    cout << "H=" << Q.head << " T=" << Q.tail << " | Queue info: ";

    if (isEmptyQueue(Q)) {
        cout << "empty queue\n";
        return;
    }

    for (int i = Q.head; i <= Q.tail; i++)
        cout << Q.info[i] << " ";

    cout << endl;
}
