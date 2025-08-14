// check whether a character is vowel or consonant;


#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter a letter :";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        cout<<"Vowel"<<endl;
    }
    else{
     cout<<"Consonant"<<endl;
    }
}