                                            /// brute force method
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums = {6,2,3,6,6,3,6};
    int n= nums.size();
    int k;
    for(int i:nums){
      
        int no =0;
        for(int j:nums){
            if(i==j){
                no++;
            }
        }
  
        if(no>n/2){
       k=i;
             }
    }
     cout<<k;
  
   
  }



   
