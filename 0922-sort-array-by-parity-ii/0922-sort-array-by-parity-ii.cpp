class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> sol;
        int j=nums.size();
        for(int i=0;i<j;i++){
            if(nums[i]%2==0){
                sol.push_back(nums[i]);
                sol.push_back(-1);
            }
        }
        int k=1;
        for(int i=0;i<j;i++){
            if(nums[i]%2!=0){
                sol[k]=nums[i];
                k+=2;
            }
        }
        return sol;
    }
};