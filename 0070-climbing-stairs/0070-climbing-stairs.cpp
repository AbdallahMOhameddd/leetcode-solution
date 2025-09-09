class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n; // base cases

        int prev1 = 2; // ways(n-1)
        int prev2 = 1; // ways(n-2)
        int curr;

        for (int i = 3; i <= n; i++) {
            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};
