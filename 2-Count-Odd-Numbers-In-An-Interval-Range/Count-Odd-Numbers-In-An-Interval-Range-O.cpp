// time : O(1)
// space : O(1)
// In this Optimized Approach We are using the Direct Formula that is (1 to High - 1(that is high+1/2) to (low - 1)(that is low/2))
class Solution {
public:
    int countOdds(int l, int h) {
        return ((h + 1) / 2) - (l / 2);
    }
};