class Solution {
public:
    int countSegments(string s) {
        if(s.length()==0) return 0;
        int count=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]!=' ' && s[i+1]==' '){
                count++;
            }
        }
        if(s[s.length()-1]==' ') return count;
        return count+1;
    }
};