#include <iostream>
#include "bstree.h"

using namespace std;

int main(){
    address root = Nil;

    insertNode(root,1);
    insertNode(root,2);
    insertNode(root,6);
    insertNode(root,4);
    insertNode(root,5);
    insertNode(root,3);
    insertNode(root,6); 
    insertNode(root,7);

    cout << "Inorder   : ";
    InOrder(root);
    cout << endl;

    cout << "Preorder  : ";
    PreOrder(root);
    cout << endl;

    cout << "Postorder : ";
    PostOrder(root);
    cout << endl;

    cout << "Jumlah Node     : " << hitungNode(root) << endl;
    cout << "Total Info Node : " << hitungTotal(root) << endl;
    cout << "Kedalaman Tree  : " << hitungKedalaman(root, 0) << endl;

    return 0;
}
