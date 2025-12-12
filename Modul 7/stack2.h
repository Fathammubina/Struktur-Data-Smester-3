#ifndef STACK2_H_INCLUDED
#define STACK2_H_INCLUDED

const int MAX = 20;

typedef int infotype;

struct Stack {
    infotype info[MAX];
    int top;
};

// Primitive
void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void push(Stack &S, infotype x);
infotype pop(Stack &S);
void printInfo(Stack S);
void balikStack(Stack &S);

// Tambahan tugas
void pushAscending(Stack &S, int x);
void getInputStream(Stack &S);

#endif
