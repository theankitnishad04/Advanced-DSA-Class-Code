#include <bits/stdc++.h>
using namespace std; 
class Node
{
 public:
    int info;
    Node *next;
    Node(int data)
    {
        info = data;
        next = NULL;
    }
};
Node *front, *rear;
bool isEmpty()
{
    return front == NULL;
}
void traverse()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        return;
    }
    Node *temp = front;
    while (temp != NULL)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
}
void enqueue(int info)
{
    Node *newNode = new Node(info);
    if (front == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}