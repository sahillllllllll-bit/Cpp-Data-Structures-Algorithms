#include<iostream>
#include <vector>
using namespace std;
void getperms(string &s, int idx, vector<string> &ans){
   
    if(idx==s.size()){
        ans.push_back({s}); // here s is string 
    return;
    }

    for(int i=idx;i<s.size();i++){
        swap(s[idx],s[i]);    
        getperms(s,idx+1,ans);                // recursion
        swap(s[idx],s[i]);               // backtracking
    }

} 

int main(){
    string s;
    cin>>s;
    vector<string> ans;
    getperms(s,0,ans);
    for(string s:ans){
        cout<<s<<endl;
    }

}