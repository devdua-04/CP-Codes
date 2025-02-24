class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i=0;
        int j=0;
        string up="UP";
        string down="DOWN";
        string r="RIGHT";
        string l="LEFT";
        for(string str:commands){
            if(str.compare(up)==0) {
                i--;
            }else if(str.compare(down)==0){
                i++;
            }else if(str.compare(r)==0){
                j++;
            }else{
                j--;
            }
        }
        return i*n+j;
    }
};