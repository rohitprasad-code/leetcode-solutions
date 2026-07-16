/*
  LeetCode Submission ID: 2070430657
  Date: 17/07/2026, 03:35:38
  Runtime: 0 ms
  Memory: 29.8 MB
  Difficulty: Easy
  Problem Link: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/submissions/2070430657/?envType=daily-question&envId=2026-07-16
*/

class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans = words.size();
        int n = words.size();

        for (int i = 0; i < n; ++i) {
            if (words[i] == target) {
                int dist = abs(i - startIndex);
                ans = min(ans, min(dist, n - dist));
            }
        }

        return ans < n ? ans : -1;
    }
};