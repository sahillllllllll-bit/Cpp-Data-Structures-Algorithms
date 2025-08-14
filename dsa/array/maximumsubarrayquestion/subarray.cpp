                           //  it is to find the subarray :- subarray is the continous value of array;

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of digits : ";
        cin>>n;
       int arr[n];
       cout<<"enter the digits : ";
       for(int s=0;s<n;s++){
        cin>>arr[s];
       }

  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        for(int k=i;k<=j;k++){
            cout<<arr[k];

            
        }
        cout<<" ";
    }
    cout<<endl;
  }
  return 0;
}