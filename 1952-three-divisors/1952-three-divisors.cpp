class Solution {
public:
    bool isThree(int n) {
        int count=0;
        if(n%2==0 && n>4) return false;
        if(n<=2) return false;
        for(int i=2;i<=n/2;i++){
            if(n%i==0) count++;
            if(count>1) return false;
        }
        if(count) return true;
        return false;
    }
};