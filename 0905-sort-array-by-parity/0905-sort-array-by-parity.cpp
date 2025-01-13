class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> sol;
        int j=nums.size();
        int temp;
        while(i<j){
            if(nums[i]%2==0) sol.push_back(nums[i]);
            i++;
        }
        i=0
        while(i<j){
            if(nums[i]%2!=0) sol.push_back(nums[i]);
            i++;
        }
        return sol;
    }
};