// This is an Optimized Approach in which we are maintaining a variable that counts the number of Even Numbers in array
// We are extracting one element and after that we divide that number by 10 and do cnt++m until that number is greater than Zero 
// And at last we are checking a condition in Loop until the cnt > 0 and that number is a divisible by 2 (Means the number is Even) 
// and we do evenDigitNumbers++
// time : O(nlogm)
// space : O(1)
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenDigitNumbers = 0; // Renamed for clarity

    // 2. A range-based for loop is used, which is simpler and safer
    for (int element : nums) {
        int cnt = 0;
        
        // This inner logic remains the same
        while (element > 0) {
            element = element / 10;
            cnt++;
        }

        if (cnt > 0 && cnt % 2 == 0) { // Added cnt > 0 check to handle input '0' correctly
            evenDigitNumbers++;
        }
    }
    return evenDigitNumbers;
    }
};