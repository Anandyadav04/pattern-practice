class Solution {
public:
    int reverse(int x) {
        long int rev = 0;
        while (x != 0) {
            int rem = x % 10;
            rev = rev*10 + rem;
            x = x / 10;
        }
        return rev > INT_MAX or rev < INT_MIN ? 0 : rev;
    }
};