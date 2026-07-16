/*
  LeetCode Submission ID: 2070427691
  Date: 17/07/2026, 03:25:53
  Runtime: 7 ms
  Memory: 13.2 MB
  Difficulty: Easy
  Problem Link: https://leetcode.com/problems/count-binary-substrings/submissions/2070427691/?envType=daily-question&envId=2026-07-16
*/

class Solution {
public:
    int countBinarySubstrings(string s) {
        int cur = 1, pre = 0, res = 0;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1])
                cur++;
            else {
                res += min(cur, pre);
                pre = cur;
                cur = 1;
            }
        }
        return res + min(cur, pre);
    }
};