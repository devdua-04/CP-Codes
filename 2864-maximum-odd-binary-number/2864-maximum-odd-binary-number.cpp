class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt_1=0;
        for(auto i:s){
            if(i=='1') cnt_1++;
        }
        string sol="";
        for(int i=0;i<s.length();i++){
            if(cnt_1>1){
                sol+='1';
                cnt_1--;
            } 
            else if( cnt_1==1 && i!=s.length()-1) sol+='0';
            else sol+='1';
        }
        return sol;
    }
};