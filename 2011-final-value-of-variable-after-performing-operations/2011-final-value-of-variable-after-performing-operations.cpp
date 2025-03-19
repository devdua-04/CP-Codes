class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sol=0;
        for(string k:operations){
            for(int i=0;i<k.length();i++){
                if(k[i]=='-'){
                    sol-=1;
                    break;
                }else if(k[i]=='+'){
                    sol+=1;
                    break;
                }else{
                    // do nothing
                }
            }
        }
        return sol;
    }
};