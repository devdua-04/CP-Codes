class Solution {
public:
    bool isPrime(int n){
        if(n==2) return true;
        if(n<2) return false;
        for(int i=2;i<=n/2;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    vector<int> constructRectangle(int area) {
        // int l;
        // int w;
        int n=sqrt(area);
        if(isPrime(area)) return {area,1};
        while(area%n!=0){
            n++;
        }
        return {max(n,area/n),min(n,area/n)};
    }
};