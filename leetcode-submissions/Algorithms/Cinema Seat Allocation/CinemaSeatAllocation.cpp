/*
  LeetCode Submission ID: 2072721790
  Date: 19/07/2026, 00:26:13
  Runtime: 140 ms
  Memory: 116.2 MB
  Difficulty: Medium
  Problem Link: https://leetcode.com/problems/cinema-seat-allocation/submissions/2072721790/
*/

class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, unordered_set<int>> rows;
        
        for (auto &seat : reservedSeats) {
            rows[seat[0]].insert(seat[1]);
        }

        int ans = (n - rows.size()) * 2;

        for (auto [row, seats] : rows) {
            bool left = true, middle = true, right = true;

            for (int i = 2; i <= 5; i++) {
                if (seats.count(i)) left = false;
            }

            for (int i = 4; i <= 7; i++) {
                if (seats.count(i)) middle = false;
            }

            for (int i = 6; i <= 9; i++) {
                if (seats.count(i)) right = false;
            }

            if (left && right)
                ans += 2;
            else if (left || middle || right)
                ans += 1;
        }

        return ans;
    }
};