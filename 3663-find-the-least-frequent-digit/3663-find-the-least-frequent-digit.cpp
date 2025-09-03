class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int>  res(10,0);
        while(n!=0){
            res[(n%10)]++;
            n/=10;
        }
        int min=INT_MAX;
        int dig=0;
        for(int i=0;i<10;i++){
            // cout<<res[i]<<" ";
            if(res[i]<min && res[i]!=0){
                min=res[i];
                dig=i;
            }
        }
        cout<<endl;
        return dig;
    }
};