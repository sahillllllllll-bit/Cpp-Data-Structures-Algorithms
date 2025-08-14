#include<iostream>

//  in this method time complexity is n2 , in this method  is array is sorted in any iteration then also it completes it all iteration to avoid this we use bool ;
using namespace std;
 void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool isswap = false;
        for(int j=0;j<n+1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap = true;
            }
        }
        if(!isswap){
            return ;  // if array is aalready sorted 
        }
    }

 }
  void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  }
int main(){
cout<<"enter the size of the array :";
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,n);
print(arr,n);
}