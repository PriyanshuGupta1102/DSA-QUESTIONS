// This is a Brute Force Approach in which we are Firstly Sorting the Current Array and then Comparing the index with their respective value 
// time : O(n logm)
// space : O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int temp;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] != i) {
                temp = i;
                break;
            }
        }
        return temp;
    }
};