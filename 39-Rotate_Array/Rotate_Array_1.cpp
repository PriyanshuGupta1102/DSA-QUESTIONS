class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    k = k % nums.size(); // since k can exceed n

	// 1. reverse arr[0...n-1]

	int i = 0;
	int j = nums.size() - 1;

	while (i < j) { // time : n/2.c
		swap(nums[i], nums[j]);
		i++;
		j--;
	}

	// 2. reverse arr[0...k-1]

	i = 0;
	j = k - 1;

	while (i < j) { // time : k/2.c
		swap(nums[i], nums[j]);
		i++;
		j--;
	}

	// 3. reverse arr[k...n-1]

	i = k;
	j = nums.size() - 1;

	while (i < j) { // time : (n-k)/2.c
		swap(nums[i], nums[j]);
		i++;
		j--;
	}

    }
};