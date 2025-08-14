
 // find maximum in array [mountain]



 /*
purpose of ios :: sync_with_stdio(false);;   ..// it turns off the synchronization , allowing cin/cout to eb faster ,especially useful in competitive programming or situations whwere a lot 
cin.tie(0); // untie cin and cout for efficiency

*/

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"enter the number of test cases :";
    cin>>t;
    while(t--){

    int n;
    cout<<"enter the numbers of mountains :";
    cin>>n;

    int arr[n];
    int s= INT8_MIN;
    

cout<<"enter the heights of mountains :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>s){
          s=arr[i];
        }
    }
    cout<<"highest mountain  is :"<<s<<endl;
}
}





 // smallest element in array




// #include<iostream>
// using namespace std;
// int main(){
   
//     int n;
//     cout<<"enter the length of array :";
//     cin>>n;

//     int arr[n];
//     int s= INT8_MAX;
    

// cout<<"enter the elements of array :";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         if(arr[i]<s){
//           s=arr[i];
//         }
//     }
//     cout<<"smallest element is :"<<s<<endl;
// }


    
    