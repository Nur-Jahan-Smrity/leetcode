//1. Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> uMap;
        for (int i = 0; i < nums.size(); ++i) {
            int n = nums[i];
            int diff = target - n;
            //count function returns the number of occurrences of diff in the map.
            if (uMap.count(diff) > 0) {
                return {uMap[diff], i};
            }
            uMap[n] = i;
        }
        return {};
    }
};
