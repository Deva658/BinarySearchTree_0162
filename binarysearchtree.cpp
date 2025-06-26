#include <iostream>
using namespace std;

class Node 
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;
    
    //constructor for the Node class
    Node()
    {
        leftchild = nullptr; // Initialize left child to null
        rightchild = nullptr; // Initialize right child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // Initialize ROOT to null
    }

    void insert()
    {
        int x;
        cout << "Masukan nilai: ";
        cin >> x;

        //step 1: allocate memory for the new node
        Node *newNode = new Node();


};