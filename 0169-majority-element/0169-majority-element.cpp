class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int fre=0;
        int pointer=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                fre++;
                if(fre>=n/2){
                    return nums[i];
                }
            }
            else{
                fre=1;
            }
        }
        return nums[n-1];
    }
};