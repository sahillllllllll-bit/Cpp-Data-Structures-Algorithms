  #include<iostream>
#include<unordered_map>
using namespace std;

int main(){

unordered_map<string,int> s;
s.insert({"alto",23});
s.insert({"fortuner",53});
s.insert({"xuv700",33});
s.emplace("xuv7000",33);  // it is same as insert but we dont have to make object 

for(auto p:s){
    cout<<p.first<<" "<<p.second<<endl;
}
}


