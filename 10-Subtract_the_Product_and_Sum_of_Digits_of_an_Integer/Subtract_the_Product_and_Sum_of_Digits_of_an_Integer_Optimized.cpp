// This is an Optimized Approach in which we are extracting one digit from one element and doing Multiplication and Addition 
// And after that we are removing that element from that to do this same operation with other digits 
// time : O(logn)
// space : O(1)
class Solution {
public:
    int subtractProductAndSum(int n) {
    int prod = 1;
	int sum = 0;

	while(n > 0){
		int digit = n % 10;
		prod = prod * digit;
		sum = sum + digit;
		n = n / 10;
	}

	return prod - sum;
    }
};