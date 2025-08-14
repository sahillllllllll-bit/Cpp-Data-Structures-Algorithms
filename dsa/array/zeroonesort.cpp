#include<iostream>
#include<vector>

using namespace std;
int main(){
     int n;
     cin>>n;
    vector<int> nums;
  for(int i=0;i<n;i++){
    int ele ;
    cin>>ele;
    nums.push_back(ele);
  }
   int zeros=0;
   for(int value :nums){
    if(value==0){
        zeros++;
    }

   }
 
   
   vector<int> ans;
   for(int j=0;j<n;j++){
   if(j<zeros){
    ans.push_back(0);
   }
   else{
    ans.push_back(1);
   }


}
for(int k=0;k<n;k++){
    cout<<ans[k]<<" ";
}
cout<<endl;
}