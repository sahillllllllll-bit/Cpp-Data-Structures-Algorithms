  // queue is a first in first out  variable /
  //  in queue  we can only add value from the back and remove  from the froont 
  // it is like a horizontal container , it is like a "piche se ghuso aage se niklo"

  #include<iostream>
#include<queue>
using namespace std;

int main(){

queue<int> s;
s.push(40);
s.push(50);
s.push(60);
s.push(70);
 queue<int> s1;
 s1.swap(s);            // it swaps all values from s to s1 and s become empty

while(!s.empty()){
cout<<s.front()<<endl;
s.pop();
}
while(!s1.empty()){
cout<<s1.front()<<endl;
s1.pop();
}


}