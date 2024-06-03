#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    public:
    node(int data1, node* ptr1)
    {
        data = data1;
        next = ptr1;
    }

    public:
    node(int data1) 
    {
        data = data1;
        next = nullptr;
    }
};

//Assumption : you've already been given the head of a linkedlist and the number you have to find. \
write a function that finds the element in the ll.

int search(node* head, int element)
{
    node* mover  = head;

    while(mover != nullptr)
    {
        if(mover->data == element)
            return element;

        else
        {
            mover = mover->next;
        }
    }

    return -1; //(assume -1 means the element is not present)
}