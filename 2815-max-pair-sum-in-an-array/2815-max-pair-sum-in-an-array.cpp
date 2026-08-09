class Solution {
public:
    int maxSum(vector<int>& nums) {
        vector<int> mx(10, -1);
        int ans = -1;

        for (int i = 0; i < nums.size(); i++) {

            int temp = nums[i];
            int largestDigit = 0;

            while (temp > 0) {
                largestDigit = max(largestDigit, temp % 10);
                temp /= 10;
            }

            if (mx[largestDigit] != -1) {
                ans = max(ans, mx[largestDigit] + nums[i]);
            }

            mx[largestDigit] = max(mx[largestDigit], nums[i]);
        }

        return ans;
    }
};