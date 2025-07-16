// This is not Totally Brute Force Approach this is Optimized than that but Yes better solution than that is Exists 
// This Solution has more than 75% Acceptance in Leet Code So u can think of it that it is optimized than a Totally Brute Force Approach
// time : O(nlogm)
// space : O(1)
class Solution {
public: 
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] == nums[i + 1]) {
                flag = true;
                break;
            }
        }
        if(flag){
            return true;
        } else {
            return false;
        }
    }
};