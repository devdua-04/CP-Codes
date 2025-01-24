#include <string.h>
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> sol(26,"");
        vector<string> sl;
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                // cout<<temp;
                sl.push_back(temp);
                temp="";
            }else
                temp+=s[i];
        }
        sl.push_back(temp);
        if(sl.size()!=pattern.length()) return false;
        for(int i=0;i<pattern.length();i++){
            // cout<<sl[i];
            if(sol[int(pattern[i]-'a')]==""){
                sol[int(pattern[i]-'a')]=sl[i];
            }else{
                if(sol[int(pattern[i]-'a')].compare(sl[i])) return false;
            }
        }
        for(int i=0;i<26;i++){
            for(int j=i+1;j<26;j++){
                cout<<sol[i]<<" "<<sol[j]<<endl;
                if(sol[i].compare(sol[j])==0 && sol[i]!="") return false;
            }
        }
        return true;
    }
};