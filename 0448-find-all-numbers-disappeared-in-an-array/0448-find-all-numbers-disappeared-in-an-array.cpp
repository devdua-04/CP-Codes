class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> count(n,0);
        for(int i:nums){
            count[i-1]++;
        }
        vector<int> res;
        for(int i=0;i<n;i++){
            if(count[i]==0) res.push_back(i+1);
        }
        return res;
    }
};