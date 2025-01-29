class Solution {
public:
    static bool comp(vector<int>& a, vector<int>&b){
        return a[0]>b[0];
    }
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<vector<int>> sol;
        vector<string> res(score.size());
        for(int i=0;i<score.size();i++){
            sol.push_back({score[i],i});
        }
        sort(sol.begin(),sol.end(),comp);
        for(int i=0;i<sol.size();i++){
            // cout<<sol[i
            if(i==0)
                res[sol[i][1]]="Gold Medal";
            else if(i==1) res[sol[i][1]]="Silver Medal";
            else if(i==2) res[sol[i][1]]="Bronze Medal";
            else{
                res[sol[i][1]]=to_string(i+1);
            }
        }
        return res;
    }

};