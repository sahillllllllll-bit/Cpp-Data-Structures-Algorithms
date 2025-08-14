#include <iostream>
using namespace std;
class a{
    public:
     int x;
     void incx(){
        x=x+1;
     }
};


int main()
{
   a obj1;
   a obj2;
   obj1.x=129;
   obj1.incx();
   cout<<obj1.x<<endl;
}
