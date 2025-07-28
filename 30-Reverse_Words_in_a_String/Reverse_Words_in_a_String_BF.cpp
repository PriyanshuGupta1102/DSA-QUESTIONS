class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);         // Step 1: Create a stream from the input string
        string word, result = "";     // Step 2: 'word' stores each word; 'result' will store the final reversed sentence

        while (iss >> word) {         // Step 3: Extract each word from the stream (skips extra spaces automatically)
            result = word + " " + result;  // Step 4: Put each word at the front to reverse the order
        }

        if (!result.empty()) result.pop_back(); // Step 5: Remove trailing space at the end

        return result;                // Step 6: Return the final reversed string
    }
};