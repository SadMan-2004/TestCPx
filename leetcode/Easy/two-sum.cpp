// Problem: Two Sum
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/two-sum/
// Solved on: 2026-07-22T20:38:04.067Z

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};