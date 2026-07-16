/*
  LeetCode Submission ID: 2070426536
  Date: 17/07/2026, 03:22:15
  Runtime: 0 ms
  Memory: 7.7 MB
  Difficulty: Easy
  Problem Link: https://leetcode.com/problems/complement-of-base-10-integer/submissions/2070426536/?envType=daily-question&envId=2026-07-16
*/

class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) return 1;
        int mask = n;
        for (int i = 0; i <= 4; i++)
            mask |= mask >> (1 << i);
        return ~n & mask;
    }
};