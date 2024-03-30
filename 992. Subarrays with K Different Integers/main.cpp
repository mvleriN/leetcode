class Solution {
public:
int subarrayswithAtMostKDistinct(const vector <int>& nums, int k){
        if (k == 0){
            return 0;
        }

        unordered_map <int, int> countEntry;
        int diff = 0;
        int left = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); ++right){
            countEntry[nums[right]]++;
            if (countEntry[nums[right]] == 1){
                diff++;
            }

            while (diff > k){
                countEntry[nums[left]]--;
                if (countEntry[nums[left]] == 0){
                    diff--;
                }
                left++;
            }

            ans += right - left + 1;
        }
        return ans;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return (subarrayswithAtMostKDistinct(nums, k) - subarrayswithAtMostKDistinct(nums, k - 1));  
    }
};