                                                            //  run time polymarphism

   #include<iostream>
   using namespace std;
   class student{
    public:
    virtual void show(){
    cout<<"hello mam"<<endl;
    }};
    class teacher: public student{
        public: 
    void show(){
        cout<<"hello bacho"<<endl;
    }
   };
  int main(){
student s;
s.show();
teacher t;
t.show();
  }