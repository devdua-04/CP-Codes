class Solution {
public:
    
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int flag=0;
        for(int i=1;i<coordinates.size();i++){
            if(coordinates[i][0]!=coordinates[i-1][0]){
                flag=1;
                break;
            }
        }
        if(!flag) return true;
        flag=0;
        for(int i=1;i<coordinates.size();i++){
            if(coordinates[i][1]!=coordinates[i-1][1]){
                flag=1;
                break;
            }
        }
        if(!flag) return true;
        float m=float(coordinates[1][1]-coordinates[0][1])/float(coordinates[1][0]-coordinates[0][0]);
        float c=coordinates[0][1]-m*coordinates[0][0];
        cout<<m<<" "<<c<<endl;
        for(int i=0;i<coordinates.size();i++){
            if(coordinates[i][1]!=m*coordinates[i][0]+c){
                return false;
            }
        }
        return true;
    }
};