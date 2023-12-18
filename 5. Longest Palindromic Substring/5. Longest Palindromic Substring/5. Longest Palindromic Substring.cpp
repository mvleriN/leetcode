#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s, ans = "";
    cin >> s;

    int n = s.size();
    int maxLen = 1;
    int start = 0;

    for (int left = 0; left < n; ++left) {
        for (int right = left; right < n; ++right) {
            int currLen = right - left + 1;
            bool flag = 1;

            for (int k = 0; k < currLen / 2; ++k) {
                if (s[left + k] != s[right - k]) {
                    flag = 0;
                    break;
                }
            }

            if (flag && (currLen > maxLen)) {
                start = left;
                maxLen = currLen;
            }
        }
    }

    cout << s.substr(start, maxLen);
    
    return 0;
}