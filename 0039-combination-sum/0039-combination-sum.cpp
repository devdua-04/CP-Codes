class Solution {
public:
    void solution(vector<int>& candidates,int sum,int target,vector<vector<int>> &sol,vector<int> temp,int i){
        if(sum>target) return;
        if(sum==target) sol.push_back(temp);
        else{
            
            for(int j=i;j<candidates.size();j++){
                temp.push_back(candidates[j]);
                solution(candidates,sum+candidates[j],target,sol,temp,j);
                temp.pop_back();
            } 
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> sol;
        int sum=0;
        for(int i=0;i<candidates.size();i++){
            temp.push_back(candidates[i]);
            solution(candidates,sum+candidates[i],target,sol,temp,i);
            temp.pop_back();
        }
        return sol;
    }
};