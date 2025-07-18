class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size()+nums2.size();
        if(nums1.size()>nums2.size()) return findMedianSortedArrays(nums2,nums1);
        int low=0;
        int high=nums1.size();
        int  left=(n+1)/2;
        while(low<=high){
            int mid1=(low+high)/2;
            int mid2=left-mid1;
            int l1=INT_MIN,l2=INT_MIN;
            int r1=INT_MAX,r2=INT_MAX;
            if(mid1<nums1.size()) r1=nums1[mid1];
            if(mid2<nums2.size()) r2=nums2[mid2];
            if(mid1-1<nums1.size())l1=nums1[mid1-1];
            if(mid2-1<nums2.size())l2=nums2[mid2-1];
            if(l1<=r2 && l2<=r1){
                if(n%2==0) return (double)(max(l1,l2)+min(r1,r2))/2.0;
                return max(l1,l2);
            }else if(l1>r2){
                high=mid1-1;
            }else{
                low=mid1+1;
            } 
        }
        return 0;
    }
}; 