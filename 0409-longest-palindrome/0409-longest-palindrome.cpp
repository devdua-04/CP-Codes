class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> count_lower(26,0);
        vector<int> count_upper(26,0);
        int max_odd=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(int(s[i])>96)
                count_lower[int(s[i]-'a')]++;
            else count_upper[int(s[i]-'A')]++;
        }
        int res=0;
        for(int i=0;i<26;i++){
            cout<<count_lower[i]<<" "<<count_upper[i]<<endl;
            if(count_lower[i]%2==0) res+=count_lower[i];
            else{
                if(max_odd<count_lower[i]) max_odd=count_lower[i];
            }
             if(count_upper[i]%2==0) res+=count_upper[i];
            else{
                if(max_odd<count_upper[i]) max_odd=count_upper[i];
            }
        }

        for(int i=0;i<26;i++){
            if(count_lower[i]%2!=0 && count_lower[i]!=max_odd) res+=count_lower[i]-1;
            if(count_upper[i]%2!=0 && count_upper[i]!=max_odd) res+=count_upper[i]-1;
            if(count_lower[i]==max_odd || count_upper[i]==max_odd){
                res+=max_odd;
                max_odd=0;
            }
        }
        cout<<res<<" res "<<max_odd;
        return res+max_odd;
    }
};