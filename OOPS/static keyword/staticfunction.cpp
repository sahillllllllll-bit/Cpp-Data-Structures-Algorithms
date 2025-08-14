#include <iostream>
using namespace std;

void fun()
{
    static int x = 0;  // initialiser  runs only one time when it call
    cout << "x :" << x << endl;
    x++;
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}
