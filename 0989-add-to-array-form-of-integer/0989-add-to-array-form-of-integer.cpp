class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=0;
        int i=num.size()-1;
        while(i>=0){
            int x=num[i]+(k%10)+carry;
            // cout<<k%10<<endl;
            k/=10;
            carry=x/10;
            num[i]=x%10;
            i--;
        }
        while(k!=0){
            int x=k%10+carry;
            k/=10;
            carry=x/10;
            num.insert(num.begin(),x%10);
        }
        if(carry!=0) num.insert(num.begin(),carry);
        // reverse(res.begin(),res.end());
        return num;
    }
};