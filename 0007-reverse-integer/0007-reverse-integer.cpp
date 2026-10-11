class Solution {
public:
    long long reverse(double x) {
        long long n;
        n = x;
        long long reverse = 0;
        while (n != 0) {
            long long a = n % 10;
            n = n / 10;
            reverse = (reverse * 10) + a;
            if (reverse > INT_MAX || reverse < INT_MIN) {
                return 0;}
        }
        return (int)reverse;
    }
};