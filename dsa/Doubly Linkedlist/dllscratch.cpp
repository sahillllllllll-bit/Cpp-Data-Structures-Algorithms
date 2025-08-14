#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node*next;
  Node*prev;  

  Node( int val){
 data=val;
 next=prev=NULL;
  }
};

class Doublylist{
    Node*head;
    Node*tail;
    public:

Doublylist(){
    head=tail=NULL;
}

void push_front(int val){
    Node*newnode=new Node(val);
    if(head==NULL){
        head=tail=newnode;
    }else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}
void  push_back(int val){
    Node*newnode=new Node(val);
    if(head==NULL){
        head=tail=newnode;
    }else{
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
    }
}
void pop_front(){
 if(head==NULL){
        cout<<"DLL is empty\n";
        return;
    }
    Node*temp=head;
    head=head->next;
    
    if(head!=NULL){
        head->prev=NULL;
    }

    delete temp;
}
void pop_back(){
    if(head==NULL){
        cout<<"DLL is empty\n";
        return;
    }
      Node*temp=tail;
    tail=tail->prev;
    
    if(tail!=NULL){
        tail->next=NULL;
    }

    delete temp;
}
void print(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

};




int main(){
 Doublylist dll;
 dll.push_front(56);
 dll.push_front(67);
 dll.push_back(59);
 dll.print();
 dll.pop_front();
dll.print();
dll.pop_back();
dll.print();
 
}