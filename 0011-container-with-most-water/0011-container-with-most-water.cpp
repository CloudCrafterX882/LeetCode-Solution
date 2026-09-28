class Solution {
public:
    int maxArea(vector<int>& height) {
        int item = height[height.size()-1];
        int n = height.size()-1;
        int i=0,ans=0;
        while(i<n)
        {
            int water = min(height[i],height[n])*(n-i);
            ans = max(ans,water);
            if(height[i]<height[n])
            {
                i++;
            }
            else
            {
                n--;
            }
        }
        return ans;
    }
};