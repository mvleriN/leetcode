#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector <string> strs = {"flower", "flow", "flight"};
    string ans = "";
    sort(strs.begin(), strs.end());
    int minLen = strs[0].size();
    int k = 0;
    while (k < minLen) {
        for (int i = 0; i < strs.size() - 1; ++i) {
            if (strs[i][k] != strs[i + 1][k]) {
                cout << ans;
                return 0;
            }
        }
        ans += strs[0][k];
        k++;
    }

    return 0;
}