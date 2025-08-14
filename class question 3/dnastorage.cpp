#include<iostream>
#include<string>
using namespace std;
int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;
 string ans;

 for(int i=0;i<n;i+=2){
    if((s[i]=='0'&&s[i+1]=='0')){
        ans+="A";
    }
    else  if((s[i]=='0'&&s[i+1]=='1')){
        ans+="T";
    }
    else  if((s[i]=='1'&&s[i+1]=='0')){
        ans+="C";
    }
    else{
        ans+="G";
    }
 }
 cout<<ans<<endl;
}