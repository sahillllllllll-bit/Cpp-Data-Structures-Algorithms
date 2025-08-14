#include<iostream>
using namespace std;
class sahil{
    public: 
    sahil(){
        cout<<"i am constructor\n";
    }
    ~sahil(){
        cout<<"i am destructor\n";
    }
};
int main(){
 static sahil s;
 cout<<"end\n";
}

