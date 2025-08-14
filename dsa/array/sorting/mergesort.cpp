
// #include<iostream>
// #include<vector>
// using namespace std;


// void merge(vector<int> &arr,int st,int mid, int end){
// int i =0;
// int j= mid+1;
//  vector<int> temp;
// while(i<=mid&&j<=end){
//     if(arr[i]<=arr[j]){
//  temp.push_back(arr[i]);
//  i++;
//     }else{
//          temp.push_back(arr[j]);
//   j++;
//     }
// }

// while(i<=mid){
//     temp.push_back(arr[i]);
//     i++;
// }

// while(j<=end){
//     temp.push_back(arr[j]);
//     j++;
// }

// for(int idx=0;idx<temp.size();idx++){
//     arr[idx+st]=temp[idx];

// }
// }
// void mergesort(vector<int> &arr,int st,int end){
//   int mid= st+(end-st)/2;
//   if(st<end){
//     mergesort(arr,st,mid);
//     mergesort(arr,mid+1,end); // right 

//     merge(arr,st,mid,end);
//   }
// }


// int main(){
//     vector<int> arr ={1,4,6,3,5,8,2,3};
//     mergesort(arr,0,arr.size()-1);
//     for(int i:arr){
//         cout<<i<<" ";
//     }
// }

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end) {
    int i = st;
    int j = mid + 1;
    vector<int> temp;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= end) temp.push_back(arr[j++]);

    // Copy sorted part back to the original array
    for (int idx = 0; idx < temp.size(); idx++) {
        arr[st + idx] = temp[idx];
    }
}

void mergesort(vector<int> &arr, int st, int end) {
    if (st >= end) return; 

    int mid = st + (end - st) / 2;
    mergesort(arr, st, mid);
    mergesort(arr, mid + 1, end);

    merge(arr, st, mid, end);
}

int main() {
    vector<int> arr = {1, 4, 6, 3, 5, 8, 2, 3};
    mergesort(arr, 0, arr.size() - 1);

    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
