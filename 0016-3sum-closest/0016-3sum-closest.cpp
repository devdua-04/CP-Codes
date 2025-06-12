class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min_diff=INT_MAX;
        int sum=0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int total = nums[i] + nums[j] + nums[k];
                // cout<<abs(total-target)<<" "<<min_diff<<endl;
                if(min_diff>abs(total-target)){
                    min_diff=abs(total-target);
                    sum=total;
                }
                if (total > target) {
                    k--;
                } else if (total < target) {
                    // min_diff=min(min_diff,abs(total-target));
                    j++;
                } else {
                    return total;
                }
            }
        }
        return sum;  
    }
};
