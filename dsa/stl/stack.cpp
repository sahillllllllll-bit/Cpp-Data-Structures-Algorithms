  // stack is a last in first out  variable /
  //  in stack we can only add value from the top and also remove only from the top 
  // it is like a vertical container in which only top part is open

  #include<iostream>
#include<stack>
using namespace std;

int main(){

stack<int> s;
s.push(40);
s.push(50);
s.push(60);
s.push(70);
 stack<int> s1;
 s1.swap(s);            // it swaps all values from s to s1 and s become empty

while(!s.empty()){
cout<<s.top()<<endl;
s.pop();
}
while(!s1.empty()){
cout<<s1.top()<<endl;
s1.pop();
}


}