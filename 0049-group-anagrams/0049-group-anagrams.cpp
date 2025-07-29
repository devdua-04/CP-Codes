class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        vector<string> temp(strs.begin(),strs.end());
        for(int i=0;i<temp.size();i++){
            sort(temp[i].begin(),temp[i].end());
        }
        unordered_map<string,vector<string>> hashh;
        for(int i=0;i<temp.size();i++){
            hashh[temp[i]].push_back(strs[i]);
        }
        for(auto i:hashh){
            res.push_back(i.second);
        }
        return res;
    }
};