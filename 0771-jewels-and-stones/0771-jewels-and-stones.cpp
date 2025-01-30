class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int> jewels_up(26,0);
        vector<int> jewels_low(26,0);
        int cnt=0;
        for(int i=0;i<jewels.length();i++){
            if(int(jewels[i])>=97) jewels_low[int(jewels[i]-'a')]++;
            else jewels_up[int(jewels[i]-'A')]++;
        }
        // for(int i=0;i<26;i++) cout<<jewels_up[i]<<" l"<<jewels_low[i]<<" ";
        // cout<<endl;
        for(int i=0;i<stones.length();i++){
            cout<<stones[i]<<" ";
            if(int(stones[i])>=97){
                if(jewels_low[int(stones[i]-'a')]!=0) cnt++;
            }
            else{
                if(jewels_up[int(stones[i]-'A')]!=0) cnt++;
            }
        }
        return cnt;
    }
};