class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==1) return {to_string(nums[0])};
        nums.push_back(0);
        vector<string> sol;
        int start=nums[0];
        string s=""+to_string(start);
        int end=nums[0];
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]-1){
                end=nums[i+1];
            }else{
                if(start!=end && end>start){
                    s+="->"+to_string(end);
                    sol.push_back(s);
                    start=nums[i+1];
                    s=""+to_string(start);
                }else{
                    sol.push_back(s);
                    start=nums[i+1];
                    end=nums[i+1];
                    s=""+to_string(start);
                }
            }
        }
        return sol;
    }
};