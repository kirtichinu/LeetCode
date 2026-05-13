class Solution {
public:
    int divide(int dividend, int divisor) {
        long long dvd = abs((long long)dividend);
        long long dsr = abs((long long)divisor);

        long count = 0;
        long long temp, multiple;
        bool negative = (dividend < 0) ^ (divisor < 0);
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        while (dsr <= dvd) {
            temp = dsr;
            multiple = 1;

            while (temp << 1 <= dvd) {
                temp <<= 1;
                multiple <<= 1;
            }
            dvd = dvd - temp;
            count = count + multiple;
        }
        if (negative) {
            return -count;
        } else {
            return count;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna