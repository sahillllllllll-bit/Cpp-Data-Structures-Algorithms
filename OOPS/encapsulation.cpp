#include<iostream>
using namespace std;
class bank{
    private:   //data hiding
    int password;

    public:
    string username;


    void setpass(int s){
        password=s;
   

    }
    void display(){
        cout<<password<<endl;
    }

};
int main(){
bank k;
k.username="sahil";
k.setpass(56);
k.display();


}
 // encapsulation means when we create a hiding data in class then for accesssing that data we use function sin class