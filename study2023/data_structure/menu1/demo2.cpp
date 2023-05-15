#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int index1 = s.size()-1;
        int index2 = t.size()-1;
        int cnt = 0;
        if(index1 == index2){
            
            while(s[index1] == t[index2]){
                if(index1 == 0 && s[0] != t[0]){
                    return false;
                }
                if(index1 == 0 && s[0] == t[0]){
                    return true;
                }
                while(s[index1] == '#' && t[index2] == '#'){
                index1 --;
                index2 --;
                cnt++;
            }
                for(int i = 0;i < cnt;i++){
                    index1--;
                    index2--;
                }
                cnt = 0;
                
            }
        }
        return false;      
    }
};

int main(){
    string s = "ab##";
    string t = "c#d#";
    

    Solution solution;
    cout << solution.backspaceCompare(s,t) << endl;
    return 0; 
}