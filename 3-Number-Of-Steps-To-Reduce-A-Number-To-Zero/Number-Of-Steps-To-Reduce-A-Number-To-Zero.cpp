// time : O(logn)
// space : O(1)
class Solution {
public:
    int numberOfSteps(int num) {
    int steps = 0;
    while(num != 0){
		if(num % 2 == 0) {
			num = num / 2;
			steps++;
		}else if(num % 2 != 0){
			num--;
			steps++;
		}
	}
    return steps;
    }
};