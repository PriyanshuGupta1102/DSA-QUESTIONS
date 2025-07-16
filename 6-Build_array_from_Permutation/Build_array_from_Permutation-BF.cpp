// time : O(n)
// space : O(1)
// This is the Brute Force Approach in which I have traversing the whole array and 
// Doing ans[i] = nums[nums[i]]
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector <int> temp(nums.size(), 0);
        for (int i = 0 ; i < nums.size() ; i++) {
            temp[i] = nums[nums[i]];
        }
        return temp;
    }
};