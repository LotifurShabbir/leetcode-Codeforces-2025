int dp[501][501];

class Solution {
public:
    int max_product(vector<int>& nums1, vector<int>& nums2, int i, int j) {
        int m = nums1.size();
        int n = nums2.size();

        if (i >= m || j >= n)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int a = max_product(nums1, nums2, i + 1, j + 1);
        int b = max_product(nums1, nums2, i, j + 1);
        int c = max_product(nums1, nums2, i + 1, j);

        return dp[i][j] = max(a + nums1[i] * nums2[j], max(a, max(b, c)));
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        memset(dp, -1, sizeof(dp));

        int ans = max_product(nums1, nums2, 0, 0);

        if (ans == 0) {
            int mn1 = *min_element(nums1.begin(), nums1.end());
            int mx1 = *max_element(nums1.begin(), nums1.end());
            int mn2 = *min_element(nums2.begin(), nums2.end());
            int mx2 = *max_element(nums2.begin(), nums2.end());

            ans = max(mn1 * mn2, max(mx1 * mx2, max(mn1 * mx2, mn2 * mx1)));
        }

        return ans;
    }
};