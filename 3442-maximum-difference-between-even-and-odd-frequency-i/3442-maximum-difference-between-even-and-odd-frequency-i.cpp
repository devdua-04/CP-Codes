class Solution {
public:
    int maxDifference(string s) {
        vector<int> cnt(26,0);
        for(int i=0;i<s.length();i++){
            cnt[int(s[i]-'a')]++;
        }
        int max=0;
        int min=INT_MAX;
        for(int i=0;i<s.length();i++){
            if(cnt[int(s[i]-'a')]%2==0 && cnt[int(s[i]-'a')]<min) min=cnt[int(s[i]-'a')];
            else if(cnt[int(s[i]-'a')]%2!=0 && cnt[int(s[i]-'a')]>max) max=cnt[int(s[i]-'a')];
            else{ //
            }
        }
        return max-min;
    }
};