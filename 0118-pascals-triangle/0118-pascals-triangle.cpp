class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> res;
        vector<int> temp;
        temp.push_back(1);
        res.push_back(temp);
        temp.clear();
        for(int i=1;i<n;i++){
            temp.push_back(1);
            for(int j=1;j<i;j++){
                temp.push_back(res[i-1][j]+res[i-1][j-1]); 
                // cout<<i<<j<<endl;  
            }
            // cout<<i<<endl;
            temp.push_back(1);
            res.push_back(temp);
            temp.clear();
        }
        return res;
    }
};