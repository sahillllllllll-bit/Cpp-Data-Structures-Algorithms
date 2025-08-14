// here we can .not. use stl for linked list , here stl means - Standard Template Library  , "#include<list>"
    



#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;
    
    Node(int val) { 
        data = val;
        next = NULL;
    }
};

// Linked List class
class LinkedList {
public:
    Node* head;
     Node* tail;
public:
    LinkedList() {
        head = NULL;
    }

    // Push front (insert at the beginning)
    void pushFront(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Push back (insert at the end)
    void pushBack(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Pop front (remove from the beginning)
    void popFront() {
        if (head == nullptr) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Pop back (remove from the end)
    void popBack() {
        if (head == nullptr) return;
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    // Delete a node by value
    void remove(int val) {
        if (head == nullptr) return;
        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != val) {
            temp = temp->next;
        }
        if (temp->next == nullptr) return;
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    // Search function
    bool search(int val) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == val) return true;
            temp = temp->next;
        }
        return false;
    }
     int searchidx(int va){
        Node* temp=head;
        int idx=0;
     while(temp != nullptr){

        if(temp->data==va){
            return idx;
        }
        temp=temp->next;
        idx++;
     }
     return -1;

     }

    // Display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

 int main(){
    int n;;
    cout<<"enter the sized of List :";
    cin>>n;

    LinkedList list;
  for(int i=0;i<n;i++){
    int valu;
    cin>>valu;
    list.pushBack(valu);
  }
//   list.display();
// Step 1: Count the number of nodes
int count = 0;
Node* temp = list.head;
while (temp != nullptr) {
    count++;
    temp = temp->next;
}

// Step 2: Traverse again to the middle
int midIndex = count / 2;
temp = list.head;
for (int i = 0; i < midIndex; ++i) {
    temp = temp->next;
}

cout << "\nMiddle element (brute force): " << temp->data << endl;


// slow-fast approach

Node*slow=list.head;
Node*fast=list.head;
while(fast!=NULL&&fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
}

cout<<"middle elementy (slow-fast approach) : "<<slow->data;
   
 }