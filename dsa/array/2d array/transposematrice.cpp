#include<iostream>
using namespace std;
 int main(){
int r1,c1;
cout<<"enter the number of rows and column :";
cin>>r1>>c1;
int first[r1][c1];
cout<<"enter the values of matrice :";
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        cin>>first[i][j];
    }
}

 int transpose[c1][r1];
 for(int i=0;i<c1;i++){
    for(int j=0;j<r1;j++){
        transpose[i][j]=first[j][i];
    }
 }
  cout<<"transpose of the given matrice is : \n";
  for(int i=0;i<c1;i++){
    for(int j=0;j<r1;j++){
        cout<<transpose[i][j]<<" ";
    }
    cout<<endl;
  }

 
}