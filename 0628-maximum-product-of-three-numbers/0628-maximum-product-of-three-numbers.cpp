class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int x=nums[0]*nums[1]*nums[n];
        int y=nums[n]*nums[n-1]*nums[n-2];
        if(x>y) return x;
        return y;
    }
};