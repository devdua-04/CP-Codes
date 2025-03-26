class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size()==2) return nums;
        sort(nums.begin(),nums.end());
        int sol=0;
        vector<int> res;
        int i=0;
        while(i<nums.size()-1){
            sol=nums[i]^nums[i+1];
            if(sol!=0){
                res.push_back(nums[i]);
                sol=0;
                i+=1;
            }else{
                i+=2;
            }
        }
        if(res.size()==1) res.push_back(nums[i]);
        return res;
    }
};