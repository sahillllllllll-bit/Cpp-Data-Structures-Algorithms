
#include <iostream>
#include <string>
#include <cctype>     // to use tolower,toupper,isupper functions
#include <sstream>
using namespace std;
int main() {
    // int t;
    // cin >> t;
    // cin.ignore(); // Ignore the newline character after the integer input
     // while(t--){

        string s;
        getline(cin, s);       // Use getline to read a line of text
        
        istringstream words(s);   // IT IS USE TO accsess the words of sentence in same line
        string word;
        string titlecase;
        while(words>>word){
            bool isacronym =true;
            for(char c:word){
            if(!isupper(c)){
                isacronym =false;    // for the acronym- all the letters are in capital
                break;
            }
            }
            
            if(isacronym){
                titlecase+=word+" ";
            }else{
                word[0]=toupper(word[0]);
                for(int i=1;i<word.length();i++){
                    word[i]=tolower(word[i]);
                }
                    titlecase+=word+" ";
            }
             
            
    }

        if(!titlecase.empty()) titlecase.pop_back();    // to remove the last space 
        cout << titlecase << endl;
    // }
    return 0;
}

/* Convert String to Title Case
Given a string S consisting of only lowercase and uppercase English letters and spaces, your task is to convert it into title case. In title case, the first letter of each word is capitalized while the rest are in lowercase, except for words that are entirely in uppercase (considered as acronyms), which should remain unchanged.




Constraints

1≤T≤100
1≤∣S∣≤1000, where 
∣S∣ is the length of the string.

*/