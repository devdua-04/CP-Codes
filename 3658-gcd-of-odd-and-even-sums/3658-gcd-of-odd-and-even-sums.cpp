class Solution {
public:
    int gcd(int a,int b){
        int min=a<b?a:b;
        int res=1;
        for(int i=1;i<=min;i++){
            if(a%i==0 && b%i==0){
                res=i;
            }
        }
        return res;
    }
    int gcdOfOddEvenSums(int n) {
        return gcd(n*n, n*(n+1));/
    }
};