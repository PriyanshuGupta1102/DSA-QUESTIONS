class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> prefixIndex;
        prefixIndex[0] = -1; // Initialize with sum 0 at index -1
        
        int maxLength = 0, sum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            sum += (nums[i] == 0) ? -1 : 1; // Convert 0 to -1

            if (prefixIndex.find(sum) != prefixIndex.end()) {
                maxLength = max(maxLength, i - prefixIndex[sum]);
            } else {
                prefixIndex[sum] = i;
            }
        }

        return maxLength;
    }
};