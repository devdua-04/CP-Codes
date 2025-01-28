class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt=0;
        int n=x^y;
        string binary = bitset<32>(n).to_string();
        for(int i=0;i<binary.length();i++){
            if(binary[i]=='1') cnt++;
        }
        return cnt;
    }
};