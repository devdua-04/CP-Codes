class Solution {
public:
    int commonFactors(int a, int b) {
        int min=a<b?a:b;
        int count=1;
        for(int i=2;i<=min;i++){
            if(a%i==0 && b%i==0) count++;
        }
        return count;
    }
};