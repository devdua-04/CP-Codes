class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<int> cnt(26,0);
        for(int i=0;i<letters.size();i++){
            cnt[int(letters[i])-'a']++;
        }
        for(int i=int(target)-'a'+1;i<26;i++){
            if(cnt[i]!=0){
                return char(i+97);
            }
        }
        return letters[0];
    }
};