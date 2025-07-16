// This is a Brute Force Approach in which we are squaring each element at their Index 
// And after that we are applying the In-Build Sort Function on the Array
// time : O(n)
// space : O(1)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            nums[i] = nums[i] * nums[i];
        }

        sort(nums.begin(), nums.end());

        for(int nums : nums) {
            cout << nums << " ";
        }

        return nums;
    }
};