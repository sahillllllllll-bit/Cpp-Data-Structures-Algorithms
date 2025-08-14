#include<iostream>
using namespace std;
class car{
public:
string name;
int price;
float eff;
car(string n,int p, float e){
name=n;
price=p;
eff=e;
}
~car(){
    cout<<"delete this"<<endl; 
     // delete p pointer;   // destructor  only uses in companies and it occcurs insidde memory 
}
};
int main(){
    car c1{"auto",450,7.5
    };
    car c2{
        "fortuner", 678,2.3
    };
    
    /* car c1 ;
    c1.name="pagani";
    c1.price= 250;
    c1.eff=120.35;
    car c2;
    c2.name="lambo";
    c2.price= 2500;
    c2.eff=10.35;
*/
    cout<<c1.name<<" "<<c1.price<<" "<<c1.eff<<endl;
    cout<<c2.name<<" "<<c2.price<<" "<<c2.eff<<endl;
}
