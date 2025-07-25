class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        int answer=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<=i;j++){
                if(nums[j]<nums[i]){
                    if(dp[j]+1>dp[i]){
                        dp[i]=dp[j]+1;
                    }
                }
            }
            answer=max(answer,dp[i]);
        }
        return answer;
    }
};