class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int max=0;
        int min=INT_MAX;
        for(auto i :grid){
            for(int j:i){
                if(j<min) min=j;
                if(j>max) max=j;
            }
        }
        vector<int>count(grid.size()*grid.size(),0);
        for(auto i :grid){
            for(int j:i){
                count[j-1]++;
            }
        }
        vector<int> sol;
        for(int i=0;i<count.size();i++){
            if(count[i]==0){
                sol.push_back(i+1);
            }
            if(count[i]==2) sol.insert(sol.begin(),i+1);
        }
        return sol;
    }
};
