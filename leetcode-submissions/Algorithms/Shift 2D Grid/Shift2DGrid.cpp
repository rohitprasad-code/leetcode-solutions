/*
  LeetCode Submission ID: 2076460534
  Date: 22/07/2026, 06:54:03
  Runtime: 0 ms
  Memory: 18.2 MB
  Difficulty: Easy
  Problem Link: https://leetcode.com/problems/shift-2d-grid/submissions/2076460534/?envType=daily-question&envId=2026-07-20
*/

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        int total = m * n;
        k %= total;

        vector<vector<int>> ans(m, vector<int>(n));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                // index in 1D array (before rotation)
                int oldIndex = i * n + j;

                // index in 1D array (after rotation)
                int newIndex = (oldIndex + k) % total;

                // changing from 1d back to 2D
                int newRow = newIndex / n;
                int newCol = newIndex % n;

                ans[newRow][newCol] = grid[i][j];
            }
        }

        return ans;
    }
};