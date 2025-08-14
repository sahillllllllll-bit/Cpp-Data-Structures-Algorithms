#include<iostream>
using namespace std;
 int main(){
    int row,col;
    cout<<"enter the value of row and column :";
    cin>>row>>col;
    int s[row][col];  
    cout<<"enter the elements of array :";

    for(int i=0;i<row;i++){
        for (int j=0;j<col;j++){
       cin>>s[i][j];
    }
}

cout<<"your matrix is:";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
       cout<<s[i][j]<<" ";
    }
    cout<<endl;
}
}