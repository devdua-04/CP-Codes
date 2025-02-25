class Solution {
public:
    int maximum69Number (int num) {
        int flag=0;
        int x=num;
        vector<int> res;
        while(x!=0){
            res.push_back(x%10);
            x/=10;
        } 
        for(int i=res.size()-1;i>=0;i--){
            if(flag==0 && res[i]==6){
                x=x*10+9;
                flag=1;
            }else{
                x=x*10+res[i];
            }
        }
        return x;
    }
};