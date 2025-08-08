// time : O(n)
// space : O(1)
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        // If the array has 2 or fewer elements, it's always monotonic.
        if (nums.size() <= 2) {
            return true;
        }

        bool isIncreasing = true;
        bool isDecreasing = true;

        // Iterate through the array once to check adjacent elements.
        for (int i = 0; i < nums.size() - 1; ++i) {
            // Check for increasing condition
            if (nums[i] > nums[i+1]) {
                isIncreasing = false;
            }
            // Check for decreasing condition
            if (nums[i] < nums[i+1]) {
                isDecreasing = false;
            }
        }

        // An array is monotonic if it is either increasing or decreasing.
        return isIncreasing || isDecreasing;
    }
};