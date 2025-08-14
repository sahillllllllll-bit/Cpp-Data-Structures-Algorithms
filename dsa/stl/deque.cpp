  // Double Ended Queue  it is interally made by dynamic arrays and  have same function as vector , in deque random  access is possible

  #include<iostream>
  #include<deque>
  using namespace std;
   int main(){
    deque<string> sahil={"hey","hello"};
    sahil.push_back("king");
    cout<<sahil[2];  // all functions are same as vectors and list
   }

