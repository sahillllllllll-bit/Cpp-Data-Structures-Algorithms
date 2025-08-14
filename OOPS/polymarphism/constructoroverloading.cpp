                                   // compile time polymarphism

#include<iostream>
using namespace std;
class car{
public:
string name;
int price;
float eff;
car(){
      // default constructor
       
}
car(string n,int p, float e){   // paramatised constructor
name=n;
price=p;
eff=e;
}
car(string n,int p){   // multiple  constructo
    name=n;
    price=p;
 
    }
};
int main(){
    car c1{"auto",450,7.5
    };
    car c2{
        "fortuner", 678,2.3
    };
    car c3{"ford mustang ", 789};
    c3.eff=8.2;
    car c4 = c3;
    c4.name="sahil";  // deep copy

    car c5{c1}; //copy constructor
    
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
    cout<<c3.name<<" "<<c3.price<<" "<<c3.eff<<endl;
    cout<<c4.name<<" "<<c4.price<<" "<<c4.eff<<endl;
    cout<<c5.name<<" "<<c5.price<<" "<<c5.eff<<endl;
}
