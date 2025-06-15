class Solution {
public:
    int maxDiff(int num) {
        string s=to_string(num);
        char temp;
        for(int i=0;i<s.length();i++){
            if(s[i]!=9){
                temp=s[i];
                break;
            }
        }
        for(int i=0;i<s.length();i++){
            if(s[i]==temp){
                s[i]='9';
            }
        }
        int max=stoi(s);
        s=to_string(num);
        if(s[0]=='1'){
            for(int i=1;i<s.length();i++){
                if(s[i]!='0' && s[i]!='1'){
                    temp=s[i];
                    break;
                }
            }
            for(int i=0;i<s.length();i++){
                if(s[i]==temp){
                    s[i]='1';
                }
            }
        }
        else{
            temp=s[0];
            for(int i=0;i<s.length();i++){
                if(s[i]==temp){
                    s[i]='1';
                }
            }
        }
        return max-stoi(s);        
    }
};