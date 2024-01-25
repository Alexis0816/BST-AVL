#include "AVL.hpp"

int main()
{
    AVLTree<int> AVL;
    AVL.insert(12);
    AVL.insert(8);
    AVL.insert(20);

    // size --> 3
    cout << AVL.size() << endl;

    AVL.insert(5);
    AVL.insert(1);
    AVL.insert(15);
    AVL.insert(25);
    AVL.insert(7);
    AVL.insert(11);
    AVL.insert(9);

    // comprobamos el size --> 10
    cout << AVL.size() << endl;

    AVL.insert(13);
    AVL.insert(22);
    AVL.insert(18);
    AVL.insert(26);

    // comprobamos el size --> 14
    cout << AVL.size() << endl
         << endl;

    AVL.displayBFS();
    return 0;
}