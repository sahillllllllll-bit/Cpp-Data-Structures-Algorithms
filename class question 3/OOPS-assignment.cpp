
                                                          // multilevel  inheritence

#include<iostream>
using namespace std;
class A {
public:
    int a;
    void data_a()
    {
        cout << "Enter value of a: ";
        cin >> a;
    }
};
class B : public A {
public:
    int b;
    void data_b()
    {
        cout << "Enter value of b: ";
        cin >> b;
    }
};
class C : public B {
private:
    int c;
 
public:
    void data_c()
    {
        cout << "Enter value of c: ";
        cin >> c;
    }
 
   
    void sum()
    {
        int ans = a + b + c;
        cout << "sum: " << ans;
    }
};
int main()
{
   
    C obj;
 
    obj.data_a();
    obj.data_b();
    obj.data_c();
    obj.sum();
    return 0;
}