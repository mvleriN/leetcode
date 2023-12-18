#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
	vector <vector <int> > ans;
	vector <int> nums = { -1, 0, 1, 2, -1, -4 };

    sort(nums.begin(), nums.end());
    set <vector <int> > s;
    for (int i = 0; i < nums.size() - 1; ++i) {
        int right = nums.size() - 1;
        int left = i + 1;
        while (right - left > 0) {
            if (nums[i] + nums[left] + nums[right] > 0) {
                right--;
            }
            else {
                if (nums[i] + nums[left] + nums[right] < 0) {
                    left++;
                }
                else {
                    s.insert({ nums[i], nums[left], nums[right] });
                    left++;
                    right--;
                }
            }
        }
    }
    for (auto& e : s) {
        ans.push_back(e);
    }

	return 0;
}