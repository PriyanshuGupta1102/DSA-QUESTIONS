// This is an Optimized Approach in which we are adding to to last element of an array and if it is equal to 10 
// So we are Inserting 1 at the Starting of that Array 
// time : O(n)
// space : O(1)
1class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] + 1 != 10) {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;
            if (i == 0) {
                digits.insert(digits.begin(), 1);
                return digits;
            }
        }
        return digits;  
    }
};