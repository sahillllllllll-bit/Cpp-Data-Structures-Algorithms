#include<iostream>
using namespace std;
int main(){
    
int group,row,col;
cout<<"enter the numbers of groups,rows and columns :";
cin>>group>>row>>col;
int arr[group][row][col];
// cout<<"enter the value of the m array :";
for(int i=0;i<group;i++){
for(int j=0;j<row;j++){
    for(int k=0;k<col;k++){
        cout<<"enter elements of "<< i<<j<<k <<": ";
        cin>>arr[i][j][k];
    }
}
}
for(int i=0;i<group;i++){
    for(int j=0;j<row;j++){
        for(int k=0;k<col;k++){
            cout<<arr[i][j][k]<<" ";
        }
        
    }
    cout<<endl;
    }

}