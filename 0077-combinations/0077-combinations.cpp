class Solution {
public:
    void solve(int i,int k,int n,vector<vector<int>> &sol,vector<int> &temp){
        if(temp.size()==k) sol.push_back(temp);
        for(int j=i;j<n;j++){
            temp.push_back(j+1);
            solve(j+1,k,n,sol,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> sol;
        vector<int> temp;
        for(int i=0;i<n;i++){
            temp.push_back(i+1);
            solve(i+1,k,n,sol,temp);
            temp.pop_back();
        }
        return sol;
    }
};