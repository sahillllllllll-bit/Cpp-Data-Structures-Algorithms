#include<iostream>
#include<vector>
#include<list>
using namespace std; 
int main(){
    list<int> s;
     s.push_back(8);
          // or
     s.emplace_back(5);
     s.push_back(9);
     s.push_front(2);
     s.push_front(2);
     s.push_front(3);
 // s.pop_back();
  // s.pop_front();
for(int val: s){
    cout<<val<<" ";
}
// cout<<s[8];  

// list is interally a  doubly linked list and in this random access is not possible


}
  // list is same as vector all the functions are all same as vector
  // only the difference is that in list pushback means the value is indexed at last 