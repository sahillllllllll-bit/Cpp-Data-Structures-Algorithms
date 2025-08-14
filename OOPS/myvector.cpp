#include<iostream>
using namespace std;
 class vector{
    public :
 int size;
 int capacity;
 int* arr;
 vector(){
    size =0;
    capacity=1;
    arr =new int[1];
 } 
 void add(int ele){
  if (size==capacity){
    capacity*=2;
    int* arr2= new int[capacity];
    for(int i=0;i<size;i++){
        arr2[i]=arr[i];
    }
    arr=arr2;
  }
  arr[size++]=ele;
 }
 void remove(){
if (size==0){
    cout<<"arry is empty";
}
size--;
 }
 void print(){
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}
int get(int indx){
if(size==0){
   cout<<"array is empty";
   return -1;
}
if(indx>=size|| indx<0){
   cout<<"invalid"<<endl;
   return -1;
}
return arr[indx];
}
};
int main(){
 vector s;
 s.add(2);
 s.add(5);
 s.add(0);
 s.add(7);
 s.print();
 s.remove();
 s.print();
 cout<<s.get(5);
}