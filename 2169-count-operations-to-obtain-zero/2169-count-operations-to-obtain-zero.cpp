class Solution {
public:
    int countOperations(int num1, int num2) {
        int opr=0;
        int rem=0;
        while(num1>0 && num2>0){
            if(num1<=num2){
                opr=opr+(num2/num1);
                rem=num2/num1;
                num2=num2-(num1*rem);
            }else{
                opr=opr+(num1/num2);
                rem=num1/num2;
                num1=num1-(num2*rem);
            }
            // cout<<num1<<" "<<num2<<" "<<opr<<endl;
        }
        return opr;
    }
};