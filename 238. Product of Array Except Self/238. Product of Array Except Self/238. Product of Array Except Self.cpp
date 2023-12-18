#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector <int> ans(n), prefix(n, 1), suffix(n, 1);
    prefix[0] = 0;
    suffix[n - 1] = 0;
    prefix[1] = nums[0];
    suffix[n - 2] = nums[n - 1];
    for (int i = 2; i < n; ++i) {
        prefix[i] = nums[i - 1] * prefix[i - 1];
    }
    for (int i = n - 3; i >= 0; --i) {
        suffix[i] = nums[i + 1] * suffix[i + 1];
    }

    for (int i = 0; i < n; ++i) {
        cout << prefix[i] << ' ' << suffix[i] << endl;
    }


    return 0;
}
