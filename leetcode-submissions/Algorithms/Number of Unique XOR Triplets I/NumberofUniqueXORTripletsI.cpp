/*
  LeetCode Submission ID: 2078257556
  Date: 23/07/2026, 15:52:52
  Runtime: 0 ms
  Memory: 198.7 MB
  Difficulty: Easy
  Problem Link: https://leetcode.com/problems/number-of-unique-xor-triplets-i/submissions/2078257556/?envType=daily-question&envId=2026-07-23
*/

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) {
            return n;
        }
        int ans = 1;
        while (ans <= n) {
            ans <<= 1;
        }
        return ans;
    }
};