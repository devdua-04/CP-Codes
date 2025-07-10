class Solution {
public:
    bool dfs(vector<vector<char>>& board, int i, int j, int idx, string& word){
        if(idx == word.size()) return true ;

        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j] != word[idx]) return false ;
        char temp = board[i][j] ;
        board[i][j] = '#' ; 

        bool found = dfs(board, i-1, j, idx+1, word) ||
                    dfs(board, i, j-1, idx+1, word) ||
                    dfs(board, i+1, j, idx+1, word) ||
                    dfs(board, i, j+1, idx+1, word) ;
        
        board[i][j] = temp; 
        return found ;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size() ;
        int n = board[0].size() ;

        for(int i=0; i<m;i++){
            for(int j=0; j<n; j++){
                if(dfs(board, i, j, 0, word)){
                    return true ;
                }
            }
        }
        return false ;

    }
};