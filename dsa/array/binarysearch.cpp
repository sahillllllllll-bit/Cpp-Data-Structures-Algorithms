#include <iostream>
#include <vector>
using namespace std;

int recsearch(vector<int> arr, int t, int st, int end)
{

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (t > arr[mid])
        {

            return recsearch(arr, t, mid + 1, end); // recursive method
        }
        else if (t < arr[mid])
        {
            return recsearch(arr, t, st, mid - 1);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

// int binarysearch(vector<int> arr,int t){                                 //  iterative algorithm
//     int start=0;
//     int end= arr.size()-1;
//     while(start<=end)
//     {
//         // int mid= (start+end)/2;   // when we do problem on any aplatform due to overflow of values we use berlow alternative

//         int mid= start+(end-start)/2;
//         if(t>arr[mid]){
//             start=mid+1;                    //  time compelexity = o(logn) because , n/2^k=1, logn =k
//         }
//         else if(t<arr[mid]){
//             end=mid-1;
//         }
//         else{
//             return mid;
//         }

//     }
//     return -1;

// }

int main()
{
    vector<int> arr = {1, 3, 5, 17, 65, 98};
    int t;
    cout << "Enter target : ";
    cin >> t;
    int st = 0;
    int end = arr.size() - 1;
    cout << recsearch(arr, t, st, end);
}