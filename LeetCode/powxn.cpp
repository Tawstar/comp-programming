class Solution {
public:
    double myPow(double x, long int n) {
        double rem = 1;
        double base = x;
        long long int pwr = abs(n);
        if (x == 0)
            return 0.0;
        if (n == 0)
            return 1.0;
        while (pwr > 0) {
            if (pwr % 2 == 1)
                rem = rem * base;
            base = base * base;
            pwr = pwr / 2;
        }
        if(n<0)
            return 1/rem;
        return rem;
    }
};
