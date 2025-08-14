#include<iostream>
using namespace std;
 class draw{  // default abstract class
    virtual void drawing()=0;  // pure virtual function
 };
 class circle:  public draw{
    public:
    void drawing(){
        cout<<"drwing a cicle\n";
    }
 };
int main(){
circle a;
a.drawing();

}
/*
abstract class is used to provide a base class from which other class can be derived.
abstract classs are typically used to define an interface for derived class
*/