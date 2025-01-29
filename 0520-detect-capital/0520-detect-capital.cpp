class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt_low=0;
        int cnt_up=0;
        for(int i=0;i<word.length();i++){
            if(int(word[i])>=65 && int(word[i])<97) cnt_up++;
            else cnt_low++;
        }
        if(cnt_up==0 || cnt_low==0) return true;
        return false;
    }
};