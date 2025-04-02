class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> temp(pref.begin(),pref.end());
        int pre=pref[0];
        vector<int> sol;
        sol.push_back(pre);
        for(int i=1;i<pref.size();i++){
            sol.push_back(pre^pref[i]);
            pre=pre^(pre^pref[i]);
        }
        return sol;
    }
};