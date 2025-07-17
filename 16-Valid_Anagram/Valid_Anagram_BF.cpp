// This is a Brute Force Approach in which we are First Sorting Both the strings and then Comparing them 
// time : O(n logn + m logm)
// space : O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s == t;
    }
};