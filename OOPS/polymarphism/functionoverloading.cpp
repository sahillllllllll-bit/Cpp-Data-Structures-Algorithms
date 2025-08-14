   // compile time polymarphism

   #include<iostream>
   using namespace std;
   class student{
    public:
    void show( int x){
 cout<<x<<endl;
    }
    void show(char ch){
        cout<<ch<<endl;
    }
   };
  int main(){
student s;
s.show('s');
s.show(7);
  }