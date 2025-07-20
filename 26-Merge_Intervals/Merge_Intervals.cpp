// time : O(n logn)
// space : O(n)
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& initial) {
        sort(initial.begin(), initial.end());
        vector<vector<int>> final;
        vector<int> prev = initial[0];
        int n = initial.size();
        for(int i = 0 ;i<n;i++){
          if(initial[i][0] <= prev[1]){ // Merge overlapping intervals
          prev[1] = max(prev[1],initial[i][1]);
          }else{
            final.push_back(prev);
            prev = initial[i];
          }
        }
         final.push_back(prev);
         return final;
    }
};