class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= k) {
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < k; j++) {
                    if (nums[i] == nums[j]) {
                        return true;
                    }
                }
            }
        } else {
            for (int i = 0; i < n - k; i++) {
                for (int j = 1; j <= k; j++) {
                    if (nums[i] == nums[i + j]) {
                        return true;
                    }
                }
            }
            for (int i = n - k; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (nums[i] == nums[j]) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};