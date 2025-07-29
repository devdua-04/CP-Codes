class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        if (intervals.empty()) return res;

        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        vector<int> temp = intervals[0];
        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] <= temp[1]) {
                temp[1] = max(temp[1], intervals[i][1]);
            } else {
                res.push_back(temp);
                temp = intervals[i];
            }
        }
        res.push_back(temp);
        return res;
    }
};
