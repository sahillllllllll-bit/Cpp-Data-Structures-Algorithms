#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter number of rows :";
    cin >> n;

    for (int i = 1; i <= n; i++)

    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if ((i % 2) == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    for (int i = n-1; i >= 1; i--)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if ((i % 2) == 0)
            {
                
                cout << "1";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << endl;
}
