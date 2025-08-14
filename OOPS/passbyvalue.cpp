#include<iostream>
using namespace std;
class car{
public:
string name;
int price;
float eff;

};
void print(car c){
    cout<<c.name<<" "<<c.price<<" "<<c.eff<<endl;
}
void change(car c){
    c.name="suzuki";
}
int main(){
    car c1 ;
    c1.name="pagani";
    c1.price= 250;
    c1.eff=120.35;
    car c2;
    c2.name="lambo";
    c2.price= 2500;
    c2.eff=10.35;

    //cout<<c1.name<<" "<<c1.price<<endl;
    //cout<<c2.name<<" "<<c2.price<<endl;
    cout<<c1.name<<" "<<c1.price<<" "<<c1.eff<<endl;
    cout<<c2.name<<" "<<c2.price<<" "<<c2.eff<<endl;
    change(c1);
    print(c1);
    change(c2);
    print(c2);
}
 /*
 in pass by value concept :
 if we directly sent the object in function it does nt change the value of that object . it  creates an other object which value was changed
 to correct this we use pass by reference concept in which we use "&" .*/
