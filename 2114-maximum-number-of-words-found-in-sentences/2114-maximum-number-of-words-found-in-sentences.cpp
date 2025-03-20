class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        for(auto i:sentences){
            int count=0;
            for(auto j:i){
                if(j==' ') count++;
            }
            if(i[i.length()-1]!=' ') count++;
            if(max<count) max=count;
        }
        return max;
    }
};