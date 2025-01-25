class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> count(10,0);
        string sec="";
        string gue="";
        int bull=0;
        for(int i=0;i<guess.length();i++){
            if(int(secret[i]-'0')==int(guess[i]-'0')){
                bull++;
            }
            else{
                sec+=secret[i];
                gue+=guess[i];
            }
        }
        for(int i=0;i<gue.length();i++){
            count[int(sec[i]-'0')]++;
        }
        int cnt=0;
        for(int i=0;i<gue.length();i++){
            if(count[int(gue[i]-'0')]!=0){
                cnt++;
                count[int(gue[i]-'0')]--;
            }
        }
        string res=to_string(bull)+"A"+to_string(cnt)+"B";
        return res;
    }
};