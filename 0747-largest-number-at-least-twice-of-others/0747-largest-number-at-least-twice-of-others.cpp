class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=0;
        int idx=-1;
        int max_2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max_2=max;
                max=nums[i];
                idx=i;
            }
            if(nums[i]<max && nums[i]>max_2) max_2=nums[i];
        }
        if(max>=2*max_2) return idx;
        return -1;
    }
};