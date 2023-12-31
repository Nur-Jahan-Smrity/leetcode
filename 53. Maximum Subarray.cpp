//53. Maximum Subarray.cpp
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		vector<int> temp = nums;
		for(int i = 1; i < size(nums); i++) 
		    temp[i] += max(0, temp[i-1]);
		return *max_element(begin(temp), end(temp));
	}
};
