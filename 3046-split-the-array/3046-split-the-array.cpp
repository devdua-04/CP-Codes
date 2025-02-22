class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        vector<int> cnt(100,0);
        for(int i=0;i<nums.size();i++){
            cnt[nums[i]-1]++;
        }
        for(int i=0;i<100;i++){
            if(cnt[i]>2) return false;
        }
        return true;
    }
};