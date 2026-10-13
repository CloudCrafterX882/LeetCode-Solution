class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>s1(nums.begin(),nums.end());
        if(s1.size()<nums.size()) return true;
        else return false;
    }
};