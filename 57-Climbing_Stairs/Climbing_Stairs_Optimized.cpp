class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int two_steps_before = 1;
        int one_step_before = 2;
        
        for (int i = 3; i <= n; i++) {
            int current_ways = one_step_before + two_steps_before;
            two_steps_before = one_step_before;
            one_step_before = current_ways;
        }
        
        return one_step_before;
    }
};