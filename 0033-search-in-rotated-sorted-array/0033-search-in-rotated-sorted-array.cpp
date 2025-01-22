class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid = 0;
        int low = 0;
        int high = size(nums) - 1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if ((nums[mid] > nums[high] &&
                        ((nums[mid] >= target && nums[high] >= target) ||
                         (nums[mid] <= target && nums[high] <= target))) ||
                       (nums[high] >= target && nums[mid] <= target)) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};