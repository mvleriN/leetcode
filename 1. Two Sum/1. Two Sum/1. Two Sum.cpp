#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector <int> nums;
    string s;
    getline(cin, s);

    int curr = 0;
    for (int i = 0; i < s.size(); ++i)
        if (s[i] == ' ') {
            nums.push_back(curr);
            curr = 0;
        }
        else {
            curr = curr * 10 + (s[i] - '0');
        }

    nums.push_back(curr);

    int target;
    cin >> target;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); ++i) {
        int x = target - nums[i];
        auto found = lower_bound(nums.begin(), nums.end(), x);
        if (found - nums.begin() >= 0) {
            cout << i << ' ' << found - nums.begin();
            break;
        }
    }
    
    return 0;
}
