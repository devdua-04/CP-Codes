// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int start=1;
        long long int end=n;
        long long int mid=(start+end)/2;
        long long int prev=mid;
        while(start<=end){
            if(isBadVersion(mid)==true){
                prev=mid;
                if(isBadVersion(mid-1)==false) break;
                else end=mid-1;
            }else{
                start=mid+1;
                prev=mid+1;
            }
            mid=(start+end)/2;
        }
        return prev;
    }
};