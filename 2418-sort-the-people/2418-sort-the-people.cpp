class Solution {
public:
    static bool comp(pair<string,int> &a,pair<string,int> &b){
        return a.second>b.second;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>> sol;
        for(int i=0;i<names.size();i++){
            sol.push_back({names[i],heights[i]});
        }
        sort(sol.begin(),sol.end(),comp);
        for(int i=0;i<names.size();i++){
            names[i]=sol[i].first;
        }
        return names;
    }
};