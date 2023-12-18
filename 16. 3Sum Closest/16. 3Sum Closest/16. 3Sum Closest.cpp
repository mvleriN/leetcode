#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector <int> nums = { -1,2,1,-4 };
    int target, ans = 0;
    cin >> target;
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size() - 1; ++i) {
        int right = nums.size() - 1;
        int left = i + 1;
        
        while (right - left > 0) {
            ans = nums[i] + nums[left] + nums[right];
            if (ans > target) {
                right--;
                if (nums[i] + nums[left] + nums[right] < target) {
                    cout << ans;
                    return 0;
                }
            }
            else {
                if (ans < target) {
                    left++;
                    if (nums[i] + nums[left] + nums[right] > target) {
                        cout << ans;
                        return 0;
                    }
                }
                else {
                    cout << ans;
                    return 0;
                }
            }
        }
    }

    cout << ans;

    return 0;
}