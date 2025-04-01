class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> sol;
        int k=-1;
        for(auto str:words){
            k++;
            for(char i:str){
                if(i==x){
                    sol.push_back(k);
                    break;
                }
            }
        }
        return sol;
    }
};