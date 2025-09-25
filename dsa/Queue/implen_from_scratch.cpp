#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Queue
{
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = tail = NULL;
    }

    void push(int data)                   // O(1)            --- insert the data in queue
    { 
        Node *newnode = new Node(data);

        if (empty())
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop()
    {
        if(empty()){
            cout<<"Queue is empty\n";
            return;
        }else{
            Node* temp=head;
            head=head->next;
            delete temp;
        }
    }
    int front()
    {
        if(empty()){
            cout<<"Queue is empty\n";
            return -1;
        }
        return head->data;
    }
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    Queue q;
    q.push(5);
    q.push(6);

    cout<<q.front()<<endl;
}