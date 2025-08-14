// maximum subarry sum by kadfane algorithm #include<iostream>
#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {-1, -2, 3, 4, 5};
    int n = 5;
    int msum = 0;
    int csum = 0;
    for (int i = 0; i < n; i++)
    {
 
            csum += arr[i];

            msum = max(csum, msum);
            if(csum<0){
                csum=0;
            }
        
    }
    cout<<msum<<endl;
}