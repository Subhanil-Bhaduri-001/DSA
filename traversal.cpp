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

node* createll(int n)
{
    node* head = new node(1); //creating the first node (used as head)
    node* mover = head;

    for(int i = 2; i <= n; i++)
    {
        node* temp = new node(i); //create the next node
        mover->next = temp; //updating the value of the previous node to temp
        mover = temp; // move mover to current node
    }
    return head;    
}

void traversal(node* head)
{
    node* mover = head; //create a mover pointer for traversal of ll

    while(mover != nullptr) // until the mover->next equals to a null pointer, it means that there is still a node available 
    {
        cout << mover->data << " "; //display the value of the current node
        mover = mover->next; // move the mover pointer to the next node(i.e. mover->next)
    }
}

int main()
{
    int n;
    cout << "Enter the number of nodes you want in your linkedlist: ";
    cin >> n;

    node* head = createll(n);

    //for traversal
    traversal(head);
}