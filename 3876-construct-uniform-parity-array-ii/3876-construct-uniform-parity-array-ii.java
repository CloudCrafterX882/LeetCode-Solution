class Solution {
    public boolean uniformArray(int[] nums1) {
        int minVal = Integer.MAX_VALUE;
        boolean Odd = false;

        for (int num : nums1) {
            if (num < minVal) {
                minVal = num;
            }
            if (num % 2 != 0) {
                Odd = true;
            }
        }
        if (minVal % 2 != 0) {
            return true;
        }
        return !Odd;
    }
}