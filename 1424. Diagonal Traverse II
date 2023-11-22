//1424. Diagonal Traverse II
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) 
    {
        int row = nums.size(), maxSum = 0, size = 0, index = 0;

        std::vector<std::vector<int>> map(100001);
        
        for (int i = 0; i < row; i++) 
        {
            int pp=nums[i].size();
            size += pp;
            //size = Total number of elements in nums
            for (int j = 0; j < pp; j++) 
            {
                int sum = i + j;
                map[sum].push_back(nums[i][j]);
                maxSum = std::max(maxSum, sum);
                //maxSum: Maximum sum of row and column indices 
            }
        }
        
        std::vector<int> res(size);
        for (int i = 0; i <= maxSum; i++) 
        {
            std::vector<int>& cur = map[i];
            for (int j = cur.size() - 1; j >= 0; j--) 
            {
                res[index++] = cur[j];
            }
        }
        
        return res;
    }
};
