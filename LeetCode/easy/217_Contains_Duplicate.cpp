/*
LeetCode Problem: Contains Duplicate
Difficulty: Easy

Approach:
- Brute Force: Compare each element with every other element.
- If any two elements are equal, return true.
- If no duplicates are found after checking all pairs, return false.
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Outer loop: pick each element
        for (int i = 0; i < nums.size(); i++) {
            // Inner loop: compare with remaining elements
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    return true;  // duplicate found
                }
            }
        }
        return false; // no duplicates
    }
};

/*
Complexity:
- Time Complexity: O(n^2), because of the nested loops.
- Space Complexity: O(1), since no extra space is used.
*/
