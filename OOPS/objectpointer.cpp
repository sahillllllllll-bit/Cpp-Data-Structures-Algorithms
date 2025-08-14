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
};
    void change(car* c){
       // (*c).name= "alto"; we can also write
       c->name= "alto";
    
    }
    int main(){
        
        car c2{ "fortuner", 678,2.3};  // normal form 
        car* c2= new car{ "fortuner", 678,2.3};  // stored in pointer  // this method is used in further high level and prefered
        car*p1=&c2;

        change(&c2);
        cout<<c2.name<<endl;

       // cout<<(*p1).name<<" "<<(*p1).price<<endl; also we can change value

       
        
        cout<<c2.name<<" "<<c2.price<<" "<<c2.eff<<endl;
    }