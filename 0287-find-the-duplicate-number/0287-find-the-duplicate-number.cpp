class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> count(nums.size()-1,0);
        for(int i=0;i<nums.size();i++){
            count[nums[i]-1]++;
        }
        for(int i=0;i<count.size();i++){
            if(count[i]>1) return i+1;
        }
        return 0;
    }
};