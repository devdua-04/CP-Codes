class Solution {
public:
    string reverseWords(string s) {
        vector<string> sol;
        string temp="";
        for(int i=s.length()-1;i>-1;i--){
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
            res=k+" "+res;
        }
        res.pop_back();
        return res;
    }
};