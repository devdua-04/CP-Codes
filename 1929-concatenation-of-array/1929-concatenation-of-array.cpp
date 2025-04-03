class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> sol(nums.begin(),nums.end());
        for(int i:nums){
            sol.push_back(i);
        }
        return sol;
    }
};