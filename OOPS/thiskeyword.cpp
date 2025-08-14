#include<iostream>
using namespace std;
class cricketer{
    public :
  string name ;
  int runs;
  cricketer(string name,int runs){
    this->name= name;
    this->runs =runs; // when we directly write the same name of constructors as class then compiler does not identify  
                      // the value and output the garbage value to overcome this we use "this"  keyword
  }
};
int main(){
 cricketer c1{"virat",7800
};
cricketer c2{"hardick",5600};
 cout<<c1.name<<" "<<c1.runs<<endl;
 cout<<c2.name<<" "<<c2.runs<<endl;
}