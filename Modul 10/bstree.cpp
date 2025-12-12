#include "bstree.h"

address alokasi(infotype x){
    address P = new Node;
    P->info = x;
    P->left = Nil;
    P->right = Nil;
    return P;
}

void insertNode(address &root, infotype x){
    if (root == Nil){
        root = alokasi(x);
    } else if (x < root->info){
        insertNode(root->left, x);
    } else if (x > root->info){
        insertNode(root->right, x);
    }
}

address findNode(address root, infotype x){
    if (root == Nil) return Nil;
    if (x == root->info) return root;
    else if (x < root->info) return findNode(root->left, x);
    else return findNode(root->right, x);
}

void InOrder(address root){
    if (root != Nil){
        InOrder(root->left);
        cout << root->info << " ";
        InOrder(root->right);
    }
}


int hitungNode(address root){
    if (root == Nil) return 0;
    return 1 + hitungNode(root->left) + hitungNode(root->right);
}

int hitungTotal(address root){
    if (root == Nil) return 0;
    return root->info + hitungTotal(root->left) + hitungTotal(root->right);
}

int hitungKedalaman(address root, int start){
    if (root == Nil) return start;
    int kiri = hitungKedalaman(root->left, start + 1);
    int kanan = hitungKedalaman(root->right, start + 1);
    return max(kiri, kanan);
}

void PreOrder(address root){
    if (root != Nil){
        cout << root->info << " ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

void PostOrder(address root){
    if (root != Nil){
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->info << " ";
    }
}
