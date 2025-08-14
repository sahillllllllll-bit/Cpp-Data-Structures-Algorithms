
                // multiple +single == hybrid inheritence
             
#include <iostream>
using namespace std;

class Corporate_sector{
  public:
  void mnc_names(){                                                            // base class
    cout<<"I am currently employed in CodeQueue "<<endl;
  }  
};
class Favroute{
    public:                                              // base class
    void fvrt_mnc(){
 cout<<"My favourite mnc is Sap Lab "<<endl;
    }

};
class Candidate:public Favroute,public Corporate_sector{
 public:                                                                      // derived class
 void designation_name(){
    cout<<"my favoroute designation is  CEO of company"<<endl;
 }
};

int main(){
    Candidate c1;
    c1.mnc_names();
    c1.fvrt_mnc();
    
    c1.designation_name();

    }