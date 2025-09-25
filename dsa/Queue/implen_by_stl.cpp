#include<iostream>
#include<queue>    // we have to add this 

using namespace std;

int main(){
    queue<int> q;       // initialiation of queue
    q.push(5);           // push the value in last of the queue 
    q.push(6);
    q.push(7);
    q.push(4);    
    q.push(3);

    while(!q.empty()){
        cout<<q.front()<<endl;   // print the first value of queue
        q.pop();                  // delete the first value of queue

    }
    


}