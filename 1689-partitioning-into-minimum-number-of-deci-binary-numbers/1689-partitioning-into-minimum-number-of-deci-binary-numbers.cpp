class Solution {
public:
    int minPartitions(string n) {
        int sum = n[0] - '0';
        if(n.length() == 1)
            return sum;
        int big = n[0];
        for(int i = 0 ; i < n.size() ; i++)
        {
            if(n[i]>big)
            {
                sum = sum + int(n[i] - big);
                big = n[i];
            }
        }
        return sum;
    }
};
 