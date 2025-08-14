#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>pascalst(int n){
 vector<vector<int>> pascals(n);
    for(int i=0;i<n;i++){
        pascals[i].resize(i+1);

        for(int j=0;j<i+1;j++){
        if(j==0||j==i){
            pascals[i][j]=1;
        }
        else{
            pascals[i][j]=pascals[i-1][j]+pascals[i-1][j-1];
        }
    
    }
    
    }
    return pascals;
}
int main(){
    int n;
    cin>>n;
vector<vector<int>> pascal;
pascal=pascalst(n);

for(int i=0;i<pascal.size();i++){
    for(int j=0;j<pascal[i].size();j++){
        cout<<pascal[i][j]<<" ";
    }
    cout<<endl;
}
}