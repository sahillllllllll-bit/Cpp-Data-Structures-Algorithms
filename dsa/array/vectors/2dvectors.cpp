#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> s[2];   1d vector;


   /*
   
   vector <vector<int>> s={{1,2,3},{3,4,8},{3,4,5}};
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){                                          2d vectors
          cout<<s[i][j]<<" ";
        
        }
        cout<<endl;
    }  
        
    */

    int m,n;
    cin>>m>>n;
    vector<vector<int>>vec(m,vector<int>(n));  // it means the row and column is 3 without any value
   // vector<vector<int>>vec(3,vector<int>(3,0));  // it means the row and column is 3 and all the values are 0
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){                                       
      cin>>vec[i][j];
    
    }}
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){                                       
      cout<<vec[i][j]<<" ";
    
    }
    cout<<endl;
}  

}