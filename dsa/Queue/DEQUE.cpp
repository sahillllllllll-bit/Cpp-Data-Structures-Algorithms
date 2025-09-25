// deque is a doule ended queue 
// in deque we can push from oth the sides  front/back
// in  deque we can pop from both sides and also we can get data from oth sides

#include <iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(5);
    dq.push_back(7);
    dq.push_front(8);
    cout<<dq.front()<<" "<<dq.back();

}