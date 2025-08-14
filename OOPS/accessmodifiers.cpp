#include<iostream>
using namespace std;
 class student{
public:
string name;
int rno;
float gpa;
student(string n, int r,  float g, int f){
 name=n;
 rno=r;
 gpa=g;
  fees =f;

}
void setfees(int f){  // setter
fees = f;
}
int getfees(){
 return fees;  //getter

}
void print(){
  cout<<name<<" "<<rno<<" "<<gpa<<" "<<fees;
}

 private :
 int fees;     // it doesn't directly acn be called from main / for this we have to make a function in  the same class juat like above setter nad getter //
               //      for setting the values
 };
int main(){
student s("sahil",204,2.3,1200);
cout<<s.getfees()<<endl;
s.setfees(23000);
cout<<s.getfees()<<endl;
s.print();
}
 /* these are of three types : 
   public:
   private:
   protected:
 */
 