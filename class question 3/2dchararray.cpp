#include <iostream>
#include<string>
using namespace std;

int main(){

//     int n;
//     int l;
//     cout<<"Enter the number of elements and length of elements :";
//  cin>>n>>l;
//     char s[n][l];

//     for(int i=0;i<n;i++){
//         cout<<"enter the "<<i<<" element ";
//         cin>>s[i];
//     }

//     for(int i=0;i<n;i++){
//         cout<<s[i]<<" ";
//     }


int n;
cout<<"enter the numbers of cars :";
cin>>n;
string cars[n];
for(int i=0;i<n;i++){
    cout<<"enter cars name "<<i+1<<":";
    // getline(cin,cars[i]);
    cin>>cars[i];
}
for(int i=0;i<n;i++){
    cout<<cars[i]<<endl;
}
}