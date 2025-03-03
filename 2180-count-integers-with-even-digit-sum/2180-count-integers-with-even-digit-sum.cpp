class Solution {
public:
    bool cntDigitSum(int n){
        int sum=0;
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        if(sum%2==0)  return true;
        return false;
    }
    int countEven(int num) {
        int cnt=0;
        for(int i=1;i<=num;i++){
            if(cntDigitSum(i)) cnt++;
        }
        return cnt;
    }
};