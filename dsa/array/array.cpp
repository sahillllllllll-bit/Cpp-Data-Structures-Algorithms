#include<iostream>
#include  <algorithm>

using namespace std;
int main(){
 
   int s[]={5,2,9,5,5,7,5,5,5,5,5,5,5,5,5,5,5,58};
 int m =sizeof(s)/4;
    
     int k = count(s, s+m, 5);  // wuiuthout includining algorithm we cannot use count function 
       //   in count function first we write pointer of start the pointer of end then the value (start, end , value)

             // therer are .begin(), .end() functions are in vectors
       cout<<k<<endl;

}
// 