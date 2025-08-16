/*
My Dry Run Understanding (nums = [3,2,4], target = 6):

- Start loop, hashmap empty.
- Index 0 → number = 3, complement = 3.
  Hashmap has nothing yet → store {3:0}.
- Index 1 → number = 2, complement = 4.
  Hashmap knows {3:0} but not 4 → store {2:1}.
- Index 2 → number = 4, complement = 2.
  Hashmap says: I already know 2 at index 1.
  So answer is indices [1,2].

Conclusion:
Hashmap stores numbers we've seen → when complement is found,
we can directly return {mp[complement], current_index}.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if(mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
