class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count(3,0);
        int n=nums.size();
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(count[0]!=0){
                nums[i]=0;
                count[0]--;
            }else if(count[1]!=0){
                nums[i]=1;
                count[1]--;
            }else{
                nums[i]=2;
                count[2]--;
            }
        }
    }
};