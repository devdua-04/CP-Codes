class Solution {
public:
    int possibleStringCount(string word) {
        
        int count =0;
        int ans =0;
        int prev = word[0];
        for(int i  =1;i<word.length();i++){
            if(word[i]==prev){
                count++;
            }
            else{
                ans +=count;
                count = 0;
                prev = word[i];
            }
        }
        ans +=count;
        return ans+1;
    }
};