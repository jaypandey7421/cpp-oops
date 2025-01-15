#include <iostream>
#include <string>
using namespace std;

class Solution{
  public:
        // Length of the last word in the string.
        int lengthOfLastWord(string s){
          int strinSize = s.length();
          int lastIndex = strinSize - 1;
          
          // Remove trailing space.
          while(s[lastIndex] == ' ' && lastIndex >= 0) lastIndex--;
          
          // If there is no word in the string.
          if(lastIndex < 0) return 0;
          
          // length of the last word.
          strinSize = lastIndex;
          while(lastIndex >= 0 && s[lastIndex] != ' '){
            lastIndex--;
          }
          
          return strinSize-lastIndex;
        }
};

int main(){
  Solution mySolution;
  
  cout<<"Hello World: "<<mySolution.lengthOfLastWord("Hello World")<<endl;
  cout<<"   fly me   to   the moon  : "<<mySolution.lengthOfLastWord("   fly me   to   the moon  ")<<endl;
  cout<<"luffy is still joyboy: "<<mySolution.lengthOfLastWord("luffy is still joyboy")<<endl;
  cout<<"a: "<<mySolution.lengthOfLastWord("a")<<endl;
  cout<<" : "<<mySolution.lengthOfLastWord(" ")<<endl;
  
  return 0;
}
