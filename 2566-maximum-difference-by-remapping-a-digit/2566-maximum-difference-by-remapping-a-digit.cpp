class Solution {
public:
    int minMaxDifference(int num) {
        string n=to_string(num);
        vector<int> cnt(10,0);
        int i=0;
        char temp;
        while(i<n.length()){
            if(n[i]!='9'){
                temp=n[i];
                break;
            }
            i++;
        }
        for(int i=0;i<n.length();i++){
            if(n[i]==temp){
                n[i]='9';
            }
        }
        int max=stoi(n);
        n=to_string(num);
        i=0;
        while(i<n.length()){
            if(n[i]!=0){
                temp=n[i];
                break;
            }
            i++;
        }
        for(int i=0;i<n.length();i++){
            if(n[i]==temp){
                n[i]='0';
            }
        }
        return max-stoi(n);
        // return ;
        
    }
};