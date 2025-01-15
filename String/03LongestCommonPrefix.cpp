#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution{
    public:
        string longestCommonPrefix(vector<string> &strs){
            if(strs.empty()) return "";

            string prefix = strs[0];
            for(int strIndx = 1; strIndx < strs.size(); strIndx++){
                while(strs[strIndx].find(prefix) != 0){
                    prefix = prefix.substr(0, prefix.size()-1);
                    if(prefix.empty()) return "";
                }
            }

            return prefix;
        }
};

int main(){
    Solution mySolutionObj;

    vector <string> strinArray01 = {"flower","flow","flight"};
    vector <string> strinArray02 = {"dog","racecar","car"};

    cout<<"Longest common prefix: "<<mySolutionObj.longestCommonPrefix(strinArray01)<<endl;
    cout<<"Longest common prefix: "<<mySolutionObj.longestCommonPrefix(strinArray02)<<endl;

    return 0;
}