#include<iostream>
using namespace std;
int fact(int a){
 if(a==0||a==1){
    return 1;
 }
 else{
    long result =1;
    for(int i=2;i<=a;i++){
        result*=i;
    }
    return result;
 }
}
int main(){
    int n,c;
    cout<<"enter  n :";
    cin>>n;
    
    cout<<"enter c :";
    cin>>c;
cout<<fact(n)/(fact(n-c)*fact(c));
}