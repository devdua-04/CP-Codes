class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(r==mat.size()&&c==mat[0].size()) return mat;
        if(r*c!= mat.size()*mat[0].size()) return mat;
        vector<int> all;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                all.push_back(mat[i][j]);
            }
        }
        int k=0;
        vector<vector<int>> sol(r,vector<int>(c,0));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                sol[i][j]=all[k];
                cout<<all[k]<<" ";
                k+=1;
            }
            cout<<endl;
        }
        return sol;
    }
};