// time : O(n)
// space : O(1)
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool wordEncountered = false;

        for(int i = s.length() - 1; i >= 0; i--){
            if(s[i] == ' '){
                if(!wordEncountered) continue;
                else break;
            }
            wordEncountered = true;
            count++;
        }
        return count;
    }
};