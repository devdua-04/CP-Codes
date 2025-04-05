class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less;
        vector<int> more;
        int count=0;
        for(int i:nums){
            if(i<pivot) less.push_back(i);
            else if(pivot<i)more.push_back(i);
            else count++;
        }
        vector<int> sol(less.begin(),less.end());
        for(int i=0;i<count;i++){
            sol.push_back(pivot);
        }
        sol.insert(sol.end(),more.begin(),more.end());
        return sol;
    }
};