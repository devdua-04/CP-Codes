class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum=0;
        int n=0;
        for(int i:nums){
            if(i%3==0 && i%2==0){
                sum+=i;
                n++;
            }
        }
        if(n==0) return 0;
        return sum/n;
    }
};