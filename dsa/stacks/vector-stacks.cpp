#include<iostream>
#include<vector>
using namespace std;
class Stack {
 vector<int> s;
 public:
 void push(int n){
  s.push_back(n);
 }
  void pop(){
s.pop_back();
 }

 int top(){
    return s[s.size()-1];
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