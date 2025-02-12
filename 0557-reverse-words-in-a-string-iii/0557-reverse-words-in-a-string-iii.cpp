class Solution {
public:
    string reverseWords(string s) {
        vector<string> sol;
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(temp.length()!=0){
                    sol.push_back(temp);
                    temp="";
                }
            }else {
                temp+=s[i];
            }
        }
        if(temp.length()!=0)
            sol.push_back(temp);
        string res="";
        for(string k:sol){
            for(int i=0;i<k.length()/2;i++){
                char t=k[i];
                k[i]=k[k.length()-1-i];
                k[k.length()-1-i]=t;
            }
            res=res+k+" ";
        }
        res.pop_back();
        return res;
    }
};