class Solution {
public:
    string addStrings(string nums1, string nums2) {
        string res="";
        int rem=0;
        int l1=nums1.length()-1;
        int l2=nums2.length()-1;
        while(l1>=0 && l2>=0){
            int temp=int(nums1[l1]-'0')+int(nums2[l2]-'0')+rem;
            if(temp<10){
                res=to_string(temp)+res;
                rem=0;
            }else{
                res=to_string(temp%10)+res;
                rem=temp/10;
            }
            l1--;
            l2--;
        }
        while(l1>=0){
            int temp=int(nums1[l1]-'0')+rem;
            if(temp<10){
                res=to_string(temp)+res;
                rem=0;
            }else{
                res=to_string(temp%10)+res;
                rem=temp/10;
            }
            l1--;
        }
        while(l2>=0){
            int temp=int(nums2[l2]-'0')+rem;
            if(temp<10){
                res=to_string(temp)+res;
                rem=0;
            }else{
                res=to_string(temp%10)+res;
                rem=temp/10;
            }
            l2--;
        }
        if(rem!=0) res=to_string(rem)+res;
        return res;
    }
};