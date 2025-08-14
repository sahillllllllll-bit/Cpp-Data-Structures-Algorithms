#include<iostream>
using namespace std;
 int main(){
int r1,c1;
cout<<"enter the number of rows and column :";
cin>>r1>>c1;
int first[r1][c1];
cout<<"enter the values of first matrice :";
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        cin>>first[i][j];
    }
}

  int second[r1][c1];
  cout<<"enter the values of second matrice :";
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        cin>>second[i][j];
    }
  }
 int multiply[r1][c1];
 for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        int value=0;
        for(int k=0;k<r1;k++){
            value+=first[i][k]*second[k][j];
        }
        multiply[i][j]= value;
    }
 }
  cout<<" the multiplication of both the matrices are :\n";
 for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
  cout<<multiply[i][j]<<" ";
    }
    cout<<endl;
 }
}