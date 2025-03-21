class Solution {
public:
    void traverse(set<vector<int>>& sol, vector<int>& temp, vector<int>& nums, int start) {
        sol.insert(temp);
        for (int i = start; i < nums.size(); i++) {
            temp.push_back(nums[i]);
            traverse(sol, temp, nums, i + 1);  
            temp.pop_back();  
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        set<vector<int>> sol;
        vector<int> temp;
        traverse(sol, temp, nums, 0);

       
        return vector<vector<int>>(sol.begin(), sol.end());
    }
};

