// time : O(n)
// space : O(1)
// In this Approach we are Running a Loop From low to High and 
//in the loop if the number is not divisible by 2 that means an Odd number we are doing count++
// In the last I am returning the count variable 
class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
    for(int i = low; i <= high; i++) {
		if(i % 2 != 0){
            count++;
		}
	}
    return count;
    }
};