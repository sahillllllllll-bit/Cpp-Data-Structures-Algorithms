#include<iostream>
#include<vector>
using namespace std;


        int removeElement(vector<int>& nums, int& val) {
             int count =0;
             for(int i=0;i<nums.size();i++){
                if(nums[i]!=val){
                  
               nums[count]= nums[i];
               count++;
                }
             }
            return count ;
        }

    int main(){

        vector<int>nums={3,2,3,5,6,8,3};
        int val=3;
        cout<< removeElement(nums,val);
       
      

    }