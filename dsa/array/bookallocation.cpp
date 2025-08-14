/*
You are given an array arr[] of integers, where each element arr[i] represents the number of pages in the ith book. You also have an integer k representing the number of students. The task is to allocate books to each student such that:

Each student receives atleast one book.
Each student is assigned a contiguous sequence of books.
No book is assigned to more than one student.
The objective is to minimize the maximum number of pages assigned to any student. In other words, out of all possible allocations, find the arrangement where the student who receives the most pages still has the smallest possible maximum.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).
*/
#include<iostream>
#include<vector>
using namespace std;
bool isvalid(vector<int> books, int n, int m,int mid){

int balak=1,page=0;
for(int i=0;i<n;i++){
    if(books[i]>mid) return false;
   if(page+books[i]<=mid){
     page+=books[i];
   }else{
    balak++;
    page=books[i];
   }
}

return balak>m?false:true;

}

int allocatebook(vector<int> books, int n, int m){
    if(m>n) return -1;
    int ans=-1;
int min=0,total=0;
    for(int i=0;i<n;i++){
 total+=books[i];
    }

    while(min<=total){
        int mid =  min+(total-min)/2;
  if(isvalid(books,n,m,mid)){
    ans=mid;
    total=mid-1;
  }else{
    min=mid+1;
  }
    }
    return ans;

}


int main(){
    int n ;
    cout<<"enter the number of books ;";
    cin>>n;
    
    int m;
    cout<<"enter the number of students :";
  cin>>m;
    vector<int> books(n);

    for(int i=0;i<n;i++){
        cin>>books[i];
    }
    int result = allocatebook(books, n, m);
    cout << "Minimum of the maximum pages: " << result << endl;
}