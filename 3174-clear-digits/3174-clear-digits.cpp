class Solution {
public:
    string clearDigits(string s) {
        string sol;
        for(int i=0;i<s.length();i++){
            if(int(s[i]-'0')>=0 && int(s[i]-'0')<10){
                sol.pop_back();
            }else{
                sol+=s[i];
            }
        }
        return sol;
    }
};