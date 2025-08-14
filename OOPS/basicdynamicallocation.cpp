#include<iostream>
using namespace std;
int main(){
    int x=8;
    cout<<x<<endl;
      int*ptr= new int{8}; // in this type only pointer is allocated at the time of compilation and the value is allocated at the time of run
                           // it is stored in heap memory // it is helpful in linkedlist and prefered in high level
      cout<<*ptr<<endl;
      
}