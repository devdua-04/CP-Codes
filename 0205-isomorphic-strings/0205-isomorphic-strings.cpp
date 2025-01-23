class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> counts(127, 0);
        vector<int> countt(127, 0);
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (counts[int(s[i])] == 0 && countt[int(t[i])] == 0) {
                counts[int(s[i])] = int(t[i]);
                countt[int(t[i])] = int(s[i]);
            } else if (counts[int(s[i])] != int(t[i]) ||
                       countt[int(t[i])] != int(s[i]))
                return false;
        }
        return true;
    }
};