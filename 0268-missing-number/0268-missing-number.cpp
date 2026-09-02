class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int Xor = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            Xor^=i;
            Xor^=nums[i];
        }
        return Xor;
    }
};