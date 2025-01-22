class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> index;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    index.push_back({i,j});
                }
            }
        }
        for(auto k:index){
            for(int i=0;i<matrix.size();i++){
                matrix[i][k[1]]=0;
            }
            for(int i=0;i<matrix[0].size();i++){
                matrix[k[0]][i]=0;
            }
        }
    }
};