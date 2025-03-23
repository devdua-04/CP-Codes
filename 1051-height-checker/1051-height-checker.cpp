class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> curr(heights.begin(),heights.end());
        sort(heights.begin(),heights.end());
        int cnt=0;
        for(int i=0;i<curr.size();i++){
            if(curr[i]!=heights[i]){
                cnt++;
            }
        }
        return cnt;
    }
};