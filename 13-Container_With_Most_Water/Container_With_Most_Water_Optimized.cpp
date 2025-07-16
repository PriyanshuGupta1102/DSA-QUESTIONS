// This is an Optimized Approach 
// time : O(n)
// space : O(1)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxsoFar = 0;
        int n = height.size();
        int i = 0;
        int j = n - 1;
        while(i < j) {
            int wij = j - i;
            int hij = min(height[i], height[j]);
            int aij = wij * hij;
            maxsoFar = max(maxsoFar, aij);
            if(height[i] < height[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxsoFar;
    }
};