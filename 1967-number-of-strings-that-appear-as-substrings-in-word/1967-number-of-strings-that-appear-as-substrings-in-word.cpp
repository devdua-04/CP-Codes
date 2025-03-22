class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int len = 0;

        for (string i : patterns) {
            if (word.find(i) != string::npos) {
                len++;
            }
        }
        
        return len;
    }
};