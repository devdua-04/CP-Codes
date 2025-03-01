class Solution {
public:
    int GCD(int n,int m){
        int gcd=1;
        for(int i=1;i<=n;i++){
            if(n%i==0 && m%i==0){
                gcd=i;
            }
        }
        return gcd;
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return GCD(nums[0],nums[nums.size()-1]);
    }
};