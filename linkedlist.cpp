#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    public:
    node(int data1, node* ptr1) //constructor
    {
        data = data1;
        next = ptr1;
    }

    public:
    node(int data1) //constructor
    {
        data = data1;
        next = nullptr;
    }
};

int main()
{
    //node* ll = new node(1);  ->shortcut method of creating and getting the memory address of a new node 
    //cout << ll;

    //node newnode = node(1, nullptr);
    node newnode = node(1);
    node* y = &newnode;
    cout << newnode.next /*(newnode.next points to the next node which is null in this case)*/<< "   " << y /*(y points to the current node)*/;
}