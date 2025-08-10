// time : O(n)
// space : O(1)
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        // Step 1: Mark broken letters in an array
        bool broken[26] = {false};
        for (char c : brokenLetters) {
            broken[c - 'a'] = true; // Mark this letter as broken
        }

        int count = 0;       // How many words can be typed
        bool canType = true; // Assume we can type current word

        // Step 2: Loop through each character of the text
        for (int i = 0; i <= text.size(); i++) {
            // If we reach space or end of string, word ends
            if (i == text.size() || text[i] == ' ') {
                if (canType) count++; // Count only if word had no broken letter
                canType = true;       // Reset for the next word
            }
            else {
                // If current letter is broken, mark word as not typeable
                if (broken[text[i] - 'a']) {
                    canType = false;
                }
            }
        }

        return count;
    }
};