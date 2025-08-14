             // function overloading // compile time polymorphism
#include<iostream>
using namespace std;
class fraction{
public: 
int a;
int b;
fraction(int a, int b){
    this->a=a;
    this->b=b;
}
void print(){
    cout<<a<<" / "<<b<<endl;
}
fraction operator+(fraction f){
int newa=this->a*f.b+f.a*this->b;
int newb=this->b*f.b;
fraction c(newa,newb);
return c;

}
fraction operator-(fraction f){
    int newa=this->a*f.b-f.a*this->b;
    int newb=this->b*f.b;
    fraction c(newa,newb);
    return c;
    
    }
    fraction operator*(fraction f){
        int newa=this->a*f.a;
        int newb=this->b*f.b;
        fraction c(newa,newb);
        return c;
    }
    fraction operator/(fraction f){
        int newa=this->a*f.b;
        int newb=this->b*f.a;
        fraction c(newa,newb);
        return c;
    }

};
int main(){
    int p,q,r,s;
    cin>>p>>q;
    fraction a(p,q);
    a.print();
    cin>>r>>s;
fraction b(r,s);
b.print();
fraction d=a+b;
d.print();
fraction e=a-b;
e.print();
fraction f=a*b;
f.print();
fraction g=a/b;
g.print();
}