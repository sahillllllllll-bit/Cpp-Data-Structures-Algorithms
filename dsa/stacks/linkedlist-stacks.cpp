#include<iostream>
#include<list>
using namespace std;
class Stack {
 list<int> s;
 public:
 void push(int n){
  s.push_front(n);
 }
  void pop(){
s.pop_front();
 }

 int top(){
    return s.front();       // in stl linkedlist first element is called front , head means front i  stl && tail means back
 }

 bool empty(){
    return s.size()==0;
 }
};
int main(){

Stack s;
s.push(40);
s.push(50);
s.push(60);
s.push(70);

while(!s.empty()){
cout<<s.top()<<endl;
s.pop();
}
}