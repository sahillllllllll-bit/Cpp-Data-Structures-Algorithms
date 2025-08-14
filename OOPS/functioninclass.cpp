#include<iostream>
using namespace std;
class car{
public:
string name;
int price;
float eff;
float emi;

void print(){
cout<<name<<" "<<price<<" "<<eff<<" "<<emi<<endl;}
int pay(){
    return price/emi;
}
};

int main(){
    car c1 ;
    c1.name="pagani";
    c1.price= 250;
    c1.eff=120.35;
    c1.emi=12;
    car c2;
    c2.name="lambo";
    c2.price= 2500;
    c2.eff=10.35;
   c2.emi=12;
    //cout<<c1.name<<" "<<c1.price<<endl;
    //cout<<c2.name<<" "<<c2.price<<endl;
    c1.print();
    cout<<c1.pay()<<endl;
    c2.print();
    cout<<c2.pay();
}