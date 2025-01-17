class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        int max=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i]>max){
                max=nums[i+1]-nums[i];
            }
        }
        return max;
    }
};