class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.length();
        vector<int> count(26,0);
        for(int i=0;i<n;i++){
            count[s[i]-'a']++;
            // cout<<count[i]<<" ";
        }
        for(int i=0;i<=n;i++){
            count[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(count[i]==-1){
                return char(97+i);
            }
        }
        return 'a';
    }
};