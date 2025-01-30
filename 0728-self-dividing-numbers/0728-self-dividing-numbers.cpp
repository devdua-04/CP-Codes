class Solution {
public:
    bool check(int n){
        int temp;
        int x=n;
        while(n!=0){
            temp=n%10;
            if(temp==0) return false;
            if(x%temp!=0) return false;
            n/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> sol;
        for(int i=left;i<=right;i++){
            if(check(i)) sol.push_back(i);
        }
        return sol;
    }
};