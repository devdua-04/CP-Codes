class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> cnt(100,0);
        for(int i=0;i<nums.size();i++){
            cnt[nums[i]-1]++;
        }
        int sum=0;
        for(int i=0;i<100;i++){
            if(cnt[i]>1) sum+=(cnt[i]*(cnt[i]-1))/2;
            // cout<<sum<<endl;
        }
        return sum;
    }
};