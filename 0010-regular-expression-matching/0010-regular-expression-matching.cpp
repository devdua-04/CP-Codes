class Solution {
public:
    bool isMatch(string s, string p) {
        // Base Case: If the pattern is empty, the string must be empty to match
        if (p.empty()) return s.empty();

        // Check if the first characters match (considering '.' as wildcard)
        bool first_match = (!s.empty() &&
            (s[0] == p[0] || p[0] == '.'));

        // If the second character in pattern is '*', we have two cases
        if (p.length() >= 2 && p[1] == '*') {
            // Case 1: '*' matches zero occurrences => skip 'char*' in pattern
            // Case 2: '*' matches one or more occurrences if first characters match
            return (isMatch(s, p.substr(2)) || (first_match && isMatch(s.substr(1), p)));
        } else {
            // If no '*', move both string and pattern forward one character
            return first_match && isMatch(s.substr(1), p.substr(1));
        }
    }
};
