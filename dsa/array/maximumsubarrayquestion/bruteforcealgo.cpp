///  maximum subarray sum  by bruteforce method

#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {-1, -2, 3, 4, 5};
    int n = 5;
    int msum = 0;
    for (int i = 0; i < n; i++)
    {
        int csum = 0;
        for (int j = i; j < n; j++)
        {
            csum += arr[j];

            msum = max(csum, msum);
        }
    }
    cout<<msum<<endl;
}