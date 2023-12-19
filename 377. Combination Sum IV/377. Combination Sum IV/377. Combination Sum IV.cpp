#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    vector <unsigned int> dp(target + 1, 0);
    dp[0] = 1;
    for (int sum = 1; sum <= target; ++sum) {
        for (int num : nums) {
            if (sum - num >= 0) {
                dp[sum] += dp[sum - num];
            }
        }
    }
    cout << dp[target];
    return 0;
}