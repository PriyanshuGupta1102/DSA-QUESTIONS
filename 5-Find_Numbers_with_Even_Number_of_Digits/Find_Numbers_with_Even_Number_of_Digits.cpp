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