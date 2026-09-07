class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> nums;

        
        for (int i = 0; i < nums1.size(); i++) {
            nums.push_back(nums1[i]);
        }

        
        for (int j = 0; j < nums2.size(); j++) {
            nums.push_back(nums2[j]);
        }

        
        sort(nums.begin(), nums.end());

        int n = nums.size();

        if (n % 2 == 1) {
            return nums[n / 2];
        }
        else {
            return (nums[n / 2 - 1] + nums[n / 2]) / 2.0;
        }
    }
};