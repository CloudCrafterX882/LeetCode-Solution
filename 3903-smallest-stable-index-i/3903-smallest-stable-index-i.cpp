class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>sufix_min(n);
        sufix_min[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            sufix_min[i]=min(nums[i],sufix_min[i+1]);
        }
        int prefix_max = 0;
        for(int i=0;i<n;i++)
        {
            prefix_max = max(prefix_max, nums[i]);
            if(prefix_max - sufix_min[i]<=k){
                return i;
            }
        }
        return -1;
    }
};