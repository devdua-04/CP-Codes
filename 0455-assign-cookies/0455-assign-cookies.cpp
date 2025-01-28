class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i=0;
        int j=0;
        int res=0;
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]){
                res++;
                i++;
                j++;
            }else{
                j++;
            }
        }
        return res;
    }
};