
class Solution {
public:
    int subtractProductAndSum(int n) {
        int p = 1, r = 0;

        while (n > 0) {
            int rem = n % 10;
            n = n / 10;

            p = p * rem;
            r = r + rem;
        }

        return p - r;
    }
};
