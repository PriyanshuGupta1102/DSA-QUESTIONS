class Solution {
public:
    void generate(int n, string &current, int open, int close, vector<string> &result) {
        // Base Case: If the length of the current string is 2*n
        if(current.length() == 2 * n) {
            result.push_back(current);
            return;
        }

        // Add '(' if open count is less than n
        if(open < n) {
            current.push_back('(');
            generate(n, current, open + 1, close, result);
            current.pop_back(); // backtrack
        }

        // Add ')' if close count is less than open count
        if(close < open) {
            current.push_back(')');
            generate(n, current, open, close + 1, result);
            current.pop_back(); // backtrack
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current = "";
        generate(n, current, 0, 0, result);
        return result;
    }
};