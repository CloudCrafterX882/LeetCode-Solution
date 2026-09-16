class Solution {
    public int findNthDigit(int n) {
        int length = 1;
        long count = 9;
        long start = 1;

        while (n > length * count) {
            n -= length * count;
            length++;
            count *= 10;
            start *= 10;
        }
        long targetNum = start + (n - 1) / length;

        String s = Long.toString(targetNum);
        return Character.getNumericValue(s.charAt((n - 1) % length));
    }
}