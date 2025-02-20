class Solution {
public:
    void all(vector<string> &res,int n,string str){
        if(str.length()==n){
            res.push_back(str);
            return;
        }
        all(res,n,str+"0");
        all(res,n,str+"1");
        return;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        vector<string> res;
        string str="";
        all(res,nums.size(),str);
        for(int i=0;i<res.size();i++){
            int flag=0;
            for(int j=0;j<nums.size();j++){
                if(res[i]==nums[j]){
                    flag=1;
                }
            }
            if(!flag) return res[i];
        }
        return res[0];
    }
};