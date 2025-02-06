class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int prod_0 = 1;
        int cnt_0 = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                cnt_0++;
            } else
                prod *= nums[i];
        }
        vector<int> sol(n);
        if (cnt_0 > 1)
            return vector<int>(n, 0);
        if (cnt_0 == 1) {
            for (int i = 0; i < n; i++) {
                if (nums[i] != 0)
                    sol[i] = 0;
                else {
                    sol[i] =prod;
                }
            }
            return sol;
        }
        for (int i = 0; i < n; i++) {
                sol[i] = prod / nums[i];
        }
        return sol;
    }
};