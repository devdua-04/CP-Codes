class Solution {
public:
    static bool comp(int v1,int v2){
        return v1>v2;
    }
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),comp);
        set<int> s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        vector<int> sol(s.begin(),s.end());
        n=s.size();
        if(n<3){
            return sol[n-1];
        }else{
            return sol[n-3];
        }
    }
};