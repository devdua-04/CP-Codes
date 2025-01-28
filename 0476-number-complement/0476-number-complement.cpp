#include <stdlib.h>
class Solution {
public:
    int findComplement(int num) {
        // char buffer [33];
        int flag=0;
        string b=bitset<32>(num).to_string();
        for(int i=0;i<b.length();i++){
            cout<<b[i];
            if(flag==0 && b[i]=='1'){
                flag=1;
                b[i]='0';
            }
            else if(flag==1){
                if(b[i]=='1') b[i]='0';
                else b[i]='1';
            }  
            else{
                //
            }
        }
        int t=stoi(b,nullptr,2);
        return t;
    }
};