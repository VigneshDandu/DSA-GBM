/*
 * LeetCode #1 — Two Sum
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/two-sum/
 *
 * Problem:
 *   Given an array of integers `nums` and an integer `target`,
 *   return indices of the two numbers that add up to target.
 *   Assume exactly one solution exists. Cannot use same element twice.
 *
 * Approach: Hash Map (unordered_map)
 *   - For each number, check if (target - num) is already in the map.
 *   - If yes → found the pair, return indices.
 *   - If no  → store current num with its index in the map.
 *
 * Time:  O(n)
 * Space: O(n)
 */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (seen.count(complement)) {
                return {seen[complement], i};
            }

            seen[nums[i]] = i;
        }

        return {}; // no solution (won't reach here per problem guarantee)
    }
};

// --- Test ---
int main() {
    Solution sol;

    vector<int> nums1 = {2, 7, 11, 15};
    auto res1 = sol.twoSum(nums1, 9);
    cout << "[" << res1[0] << ", " << res1[1] << "]" << endl; // [0, 1]

    vector<int> nums2 = {3, 2, 4};
    auto res2 = sol.twoSum(nums2, 6);
    cout << "[" << res2[0] << ", " << res2[1] << "]" << endl; // [1, 2]

    vector<int> nums3 = {3, 3};
    auto res3 = sol.twoSum(nums3, 6);
    cout << "[" << res3[0] << ", " << res3[1] << "]" << endl; // [0, 1]

    return 0;
}
