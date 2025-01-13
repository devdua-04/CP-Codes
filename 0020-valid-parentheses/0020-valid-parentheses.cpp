class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0) return false;
        vector<char> sol;
        sol.push_back(' ');
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                sol.push_back(s[i]);
            }
            else if(s[i]==')' && sol.back()=='('){
                sol.pop_back();
            }else if(s[i]=='}' && sol.back()=='{'){
                sol.pop_back();
            }else if(s[i]==']' && sol.back()=='['){
                sol.pop_back();
            }else{
                sol.push_back(s[i]);
                break;
            }
        }
        if(sol.size()==1) return true;
        return false;
    }
};