class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) return x; // Return x if it's 0 or 1

        long start = 1;
        long end = x;
        while (start <= end) {
            long mid = start + (end - start) / 2;
            long square = mid * mid;
            if (square == x) {
                return mid; // Return mid if mid * mid is exactly equal to x
            } else if (square < x) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return start - 1;
    }
};
