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

node* convertarrtoll(vector<int>&arr)
{
    node* head = new node(arr[0]); //creating the first node
    node* mover = head; //taking a pointer used for traversing

    for(int i = 1; i < arr.size(); i++)
    {
        node* temp = new node(arr[i]); //create the next node
        mover->next = temp; //the mover pointer is currently in the previous node, hence assign the memory location of the new node to mover->next
        mover = temp; //update the value of mover to the current node
    }

    return head;
} //this function will return the head. You must always return the head of the linkedlist in cases like this.

int main()
{
    vector<int>arr1 = {2,1,4,5};
    node* ans = convertarrtoll(arr1);
    cout << ans->data <<"    "<< ans;    
}