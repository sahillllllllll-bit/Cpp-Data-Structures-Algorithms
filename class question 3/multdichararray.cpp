#include <iostream>
#include<string>
using namespace std;

int main(){
    
 
char cars[2][3][30];
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cin>>cars[i][j];
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<cars[i][j]<<" ";
    }
}

 
}