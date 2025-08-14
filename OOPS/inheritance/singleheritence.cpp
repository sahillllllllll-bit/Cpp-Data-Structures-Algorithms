#include<iostream>
using namespace std;
class cars{
    public:
    int price;
     int seats;

};
class audi : public cars{
    public :
 int topspeed;

};
int main(){
    cars alto;
    alto.price=23000;
    alto.seats =5;
    audi s4;
    s4.price=56000;
    s4.seats=7;
    s4.topspeed=250;
     
    cout<<s4.topspeed<<endl;
    }