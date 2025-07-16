// This is a Brute Force in which we are take one element at a time and comparing them 
// With all the elements and after that we assign that value to that index
// time : O(n^2)
// space : O(1)
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
            int cnt = 0;
            for(int j = 0; j < nums.size(); j++) {
                if(j != i && nums[j] < nums[i]) {
                    cnt++;
                }
            }
            result.push_back(cnt);
        }
        return result;
    }
};