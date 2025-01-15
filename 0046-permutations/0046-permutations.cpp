class Solution {
public:
    void solution(vector<int>& nums,vector<vector<int>> &sol,vector<int> temp,int n){
        if(temp.size()==n){
            sol.push_back(temp);
            return;
        }
        else{
            for(int j=0;j<nums.size();j++){
                    int t=nums[j];
                    temp.push_back(t);
                    nums.erase(nums.begin()+j);
                    solution(nums,sol,temp.insert(t),n);
                    temp.pop_back();
                    nums.insert(nums.begin()+j,t);
                    // temp.pop_back();
                }
            } 
            return;
        }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> sol;
        vector<int> temp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int t=nums[i];
            temp.push_back(t);
            nums.erase(nums.begin()+i);
            solution(nums,sol,{t},n);
            nums.insert(nums.begin()+i,t);
            temp.pop_back();
        }
        return sol;
    }
};