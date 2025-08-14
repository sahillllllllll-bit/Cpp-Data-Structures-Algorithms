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
    print(c1);
    print(c2);
}
