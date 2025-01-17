//Floyd's Tortoise and Hare (Cycle Detection)
//287. Find the duplicate number
//This approach works in O(n) time and uses O(1) space.
class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};

// explanation:
// In the given implementation of Floyd’s Tortoise and Hare algorithm, 
// the logic is adapted to work on an array by treating it as a linked list, 
// where each index represents a "node" and the value at each index (nums[i]) represents the "next node" in the list.

// Example Walkthrough:
// Input: nums = [3, 1, 3, 4, 2]
// Phase 1: Cycle Detection:

// Initial: slow = nums[0] = 3, fast = nums[0] = 3
// Iteration 1: slow = nums[3] = 4, fast = nums[nums[3]] = nums[4] = 2
// Iteration 2: slow = nums[4] = 2, fast = nums[nums[2]] = nums[3] = 4
// Iteration 3: slow = nums[2] = 3, fast = nums[nums[4]] = nums[2] = 3
// They meet at 3.
// Phase 2: Find Entry Point:

// Reset slow = nums[0] = 3.
// Iteration 1: slow = nums[3] = 4, fast = nums[3] = 4.
// They meet at 3, which is the duplicate.
// Output: 3
