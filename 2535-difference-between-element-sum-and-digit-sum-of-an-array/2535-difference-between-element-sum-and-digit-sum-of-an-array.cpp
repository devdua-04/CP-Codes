class Solution {
public:
    int sumDigit(int n){
        int sum=0;
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum_dig=0;
        int sum=0;
        for(int i:nums){
            sum+=i;
            sum_dig+=sumDigit(i);
        }
        return sum-sum_dig;
    }
};