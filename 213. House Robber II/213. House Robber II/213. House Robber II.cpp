class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n <= 3) {
            return *max_element(nums.begin(), nums.end());
        }
        return max(robbing(nums, 0, n - 2), robbing(nums, 1, n - 1));
    }
private:
    int robbing(vector<int>& nums, int left, int right) {
        int prev = 0;
        int curr = 0;
        for (int idx = left; idx <= right; ++idx) {
            int tmp = max(prev + nums[idx], curr);
            prev = curr;
            curr = tmp;
        }
        return curr;
    }
};