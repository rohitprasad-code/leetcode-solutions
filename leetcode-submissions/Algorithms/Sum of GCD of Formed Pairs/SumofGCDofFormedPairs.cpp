class Solution {
    int gcd(int a, int b) {
        if(b == 0)
            return a;
        return gcd(b, a%b);
    }
public:
    long long gcdSum(vector<int>& nums) {
        int mx = -1;
        int n = nums.size();
        vector<int> preGCD(n, -1);
        for(int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            preGCD[i] = gcd(nums[i], mx);
        }
        sort(preGCD.begin(), preGCD.end());
        long long ans = 0;
        for(int i = 0, j = n - 1; i < j; i++ ,j--) {
            ans += gcd(preGCD[i], preGCD[j]);
        }
        return ans;
    }
};