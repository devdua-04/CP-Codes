class Solution {
public:
    int findKthNumber(int n, int k) {
        long curr = 1;
        --k;

        while (k > 0) {
            long steps = calcSteps(n, curr, curr + 1);
            if (steps <= k) {
                curr++;
                k -= steps;
            } else {
                curr *= 10;
                --k;
            }
        }
        return (int)curr;
    }

private:
    long calcSteps(int n, long first, long last) {
        long steps = 0;
        while (first <= n) {
            steps += min((long)n + 1, last) - first;
            first *= 10;
            last *= 10;
        }
        return steps;
    }
};