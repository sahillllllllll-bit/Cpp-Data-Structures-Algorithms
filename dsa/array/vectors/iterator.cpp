#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> s={"hello","hye","bye","love"};
/*
    vector<string>::iterator it;
    for(it=s.begin(); it!=s.end();it++){
      cout<<*(it)<<" ";
    } */

    
          // or


  //  vector<string>:: reverse_iterator it;
   // for(vector<string>:: reverse_iterator it =s.rbegin(); it!=s.rend();it++){
     //   cout<<*(it)<<" ";
      // }

        //   or

      for(auto it =s.rbegin(); it!=s.rend();it++){
        cout<<*(it)<<" ";
      }
}

