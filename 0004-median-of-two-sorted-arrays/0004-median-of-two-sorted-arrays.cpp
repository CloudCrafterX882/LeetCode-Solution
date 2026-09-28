class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        int m = nums1.size();
        int n = nums2.size();
        int x = m+n;
        vector<int>arr(x);
        for(int i=0;i<m;i++)
        {
            arr[i]=nums1[i];
        }
        for(int i=0;i<n;i++)
        {
            arr[m+i]=nums2[i];
        }
        sort(arr.begin(),arr.end());
        
        if((x)%2==1)
        {
            ans = arr[x/2];
        }
        else if((x)%2==0)
        {
            ans = (arr[x/2]+arr[(x/2)-1])/2.0;
        }
        return ans;
    }
};