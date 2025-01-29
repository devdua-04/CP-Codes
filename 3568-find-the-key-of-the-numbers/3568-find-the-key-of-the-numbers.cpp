class Solution {
public:
    int mini(int a,int b,int c){
        if(a<=b && a<=c) return a;
        if(b<=a && b<=c) return b;
        return c;
    }
    int generateKey(int num1, int num2, int num3) {
        string key="";
        while(num1!=0 || num2!=0 || num3!=0){
            key=to_string(mini(num1%10,num2%10,num3%10))+key;
            num1/=10;
            num2/=10;
            num3/=10;
        }
        return stoi(key);
    }
};