
//                                                                               linked list 


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
private:
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

int main() {
    LinkedList list;
    list.pushBack(10);
    list.pushBack(20);
    list.pushBack(30);
    list.display(); // Output: 10 -> 20 -> 30 -> NULL

    list.pushFront(5);
    list.display(); // Output: 5 -> 10 -> 20 -> 30 -> NULL

    list.popFront();
    list.display(); // Output: 10 -> 20 -> 30 -> NULL

    list.popBack();
    list.display(); // Output: 10 -> 20 -> NULL

   // list.remove(20);
    list.display(); // Output: 10 -> NULL

    cout << "Search 30: " << (list.search(30) ? "Found" : "Not Found") <<" "<< list.searchidx(30)<<endl;
    cout << "Search 10: " << (list.search(10) ? "Found" : "Not Found") <<" "<< list.searchidx(20)<< endl;

    return 0;
}