class Solution {
public:
    static bool compareLen(string a, string b) { return (a.size() < b.size()); }
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end(),compareLen);
        string s = "";
        string temp = strs[0];
        int n = temp.length();
        int flag = 0;
        int i = 0;
        while (i < n) {
            for (string s : strs) {
                if (temp[i] != s[i]) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                return s;
            else
                s += temp[i];
            i++;
        }
        return s;
    }
};