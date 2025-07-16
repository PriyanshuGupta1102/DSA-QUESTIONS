// This is a Brute Force Approach in which we are Extracting in which we are Parsing all the elements of the Array 
// And we are Calculating the Sum by adding all the previous elements of that Array 
// time : O(n)
// space : O(1)
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){

            nums[i]+=nums[i-1];

        }

        return nums;
    }
};