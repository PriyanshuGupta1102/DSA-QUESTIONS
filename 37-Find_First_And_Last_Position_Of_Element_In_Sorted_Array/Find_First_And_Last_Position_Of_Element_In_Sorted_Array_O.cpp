// time : O(log n)
// space : O(1)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findIndex(nums, target, true);
        int last = findIndex(nums, target, false);
        return {first, last};
    }

    int findIndex(vector<int>& nums, int target, bool findFirst) {
        int start = 0, end = nums.size() - 1;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                ans = mid;
                if (findFirst) {
                    end = mid - 1; // Move left
                } else {
                    start = mid + 1; // Move right
                }
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return ans;
    }
};