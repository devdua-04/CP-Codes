class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> count(26,0);
        for(int i=0;i<s.length();i++){
            count[s[i]-'a']++;
        }
        int temp=-1;
        for(int i=0;i<26;i++){
            if(count[i]!=0 && temp==-1) temp=count[i];
            if(count[i]!=temp && count[i]!=0) return false;
        }
        return true;
    }
};