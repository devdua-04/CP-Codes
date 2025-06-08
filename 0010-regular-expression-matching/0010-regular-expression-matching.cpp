class Solution {
public:
    bool isMatch(string s, string p) {
        int i = 0, j = 0;
        int star_i = -1, star_j = -1;

        while (i < s.length()) {
            if (j < p.length() && (p[j] == s[i] || p[j] == '.')) {
                // Characters match, move forward
                i++;
                j++;
            }
            else if (j + 1 < p.length() && p[j + 1] == '*') {
                // Store position and skip `char*`
                star_i = i;
                star_j = j;
                j += 2;
            }
            else if (star_j != -1) {
                // Backtrack: try to match one more character via previous `char*`
                star_i++;
                i = star_i;
                j = star_j + 2;
            }
            else {
                return false;
            }
        }

        // Check for remaining pattern: should be all `x*`
        while (j + 1 < p.length() && p[j + 1] == '*') {
            j += 2;
        }

        return j == p.length();
    }
};
