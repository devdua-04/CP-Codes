class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums;
        for (int i = 1; i <= n; i++) nums.push_back(i);

        vector<int> fact(n);
        fact[0] = 1;
        for (int i = 1; i < n; i++) fact[i] = fact[i - 1] * i;

        k--;  // 0-based index
        string result = "";

        for (int i = n; i >= 1; i--) {
            int idx = k / fact[i - 1];
            result += to_string(nums[idx]);
            nums.erase(nums.begin() + idx);
            k %= fact[i - 1];
        }

        return result;
    }
};
