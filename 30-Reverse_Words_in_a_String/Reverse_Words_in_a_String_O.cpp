class Solution {
public:
    string reverseWords(string s) {
        // Step 1: Remove leading, trailing and extra spaces
        removeExtraSpaces(s);

        // Step 2: Reverse the entire string
        reverse(s.begin(), s.end());

        // Step 3: Reverse each word
        int start = 0;
        for (int end = 0; end <= s.size(); ++end) {
            if (end == s.size() || s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        }

        return s;
    }

private:
    void removeExtraSpaces(string& s) {
        int n = s.size();
        int i = 0, j = 0;

        // Skip leading spaces
        while (j < n && s[j] == ' ') j++;

        bool spacePending = false;
        while (j < n) {
            if (s[j] != ' ') {
                if (spacePending) s[i++] = ' ';
                s[i++] = s[j];
                spacePending = false;
            } else {
                spacePending = true;
            }
            j++;
        }

        // Resize to correct length
        s.resize(i);
    }
};