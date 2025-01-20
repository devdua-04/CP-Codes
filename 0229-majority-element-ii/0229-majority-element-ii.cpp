class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        set<int> sol;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){ 
                count++;
                if(count>n/3) sol.insert(nums[i]);
            }else count=1;
            if(count>n/3) sol.insert(nums[i]);
        }
        if(count>n/3) sol.insert(nums[n-1]);
        vector<int> s(sol.begin(),sol.end());
        return s;
    }
};