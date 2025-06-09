class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string str=s+s;
        int j=0;
        int prev_i=1;
        int i=1;
        while(i<str.length()-1){
            if(str[i]==s[j]){
                if(j==0) prev_i=i;
                j++;
                i++;
                if(j==s.length()) break;
            }else if(str[i]!=s[j] && j!=0){
                
                i=prev_i+1;
                j=0;
            }else i++;
        }        
        if(j==s.length()) return true;
        return false;
    }
};