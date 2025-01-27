class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> count(26,0);
        for(int i=0;i<s.length();i++){
            count[int(s[i]-'a')]++;
        }
        int x=-1;
        for(int i=0;i<s.length();i++){
            if(count[int(s[i]-'a')]==1){
                x=int(s[i]-'a');
                break;
            }
        }
        cout<<x;
        if(x==-1) return -1;
        else{
            char res=char(97+x);
            cout<<"\n"<<res;
            for(int i=0;i<s.length();i++){
                if(s[i]==res) return i;
        }
        }
        return x;
    }
};