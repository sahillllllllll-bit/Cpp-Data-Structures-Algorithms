 // all the functions are same as queue , only the differnce is that all the functions first works on priority (largest value) push largest value on top 
 
 #include<iostream>
#include<queue>
using namespace std;

int main(){

priority_queue<int> s;
s.push(40);
s.push(50);
s.push(60);
s.push(70);
 priority_queue<int> s1;
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