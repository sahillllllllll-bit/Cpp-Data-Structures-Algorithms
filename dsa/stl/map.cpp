  #include<iostream>
#include<map>
using namespace std;

int main(){

map<string,int> s;
s.insert({"alto",23});
s.insert({"fortuner",53});
s.insert({"xuv700",33});
s.emplace("xuv7000",33);  // it is same as insert but we dont have to make object 

for(auto p:s){
    cout<<p.first<<" "<<p.second<<endl;
}
}