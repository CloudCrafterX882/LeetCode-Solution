class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int zeroes=0;
        for(int i:nums)
        {
            if(i==0) zeroes++;
        }
        int count=0;
        for(int i=n-zeroes;i<n;i++)
        {
            if(nums[i]!=0)
            {
                count++;
            }
        }
        return count;
    }
};