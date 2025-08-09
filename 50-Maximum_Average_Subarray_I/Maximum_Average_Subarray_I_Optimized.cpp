// time : O(n)
// space : O(1)
#include <algorithm>
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double windowSum = 0;
        // First window
        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        double maxSum = windowSum;

        // Slide the window
        for (int i = k; i < nums.size(); i++) {
            windowSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, windowSum);
        }

        return maxSum / k;
    }
};