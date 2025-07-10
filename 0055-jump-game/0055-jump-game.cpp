class Solution {
public:
    
    bool canJump(vector<int>& nums) {
        int need=1;
        int goal=nums.size()-1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i-1]>=need){
                goal-=need;
                need=1;
            }else{
                need+=1;
            }
        }
        if(goal==0) return true;
        return false;
    }
};