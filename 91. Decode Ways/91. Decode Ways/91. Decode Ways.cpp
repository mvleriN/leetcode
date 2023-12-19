#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = (int)s.size();
    vector <unsigned int> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; ++i) {
        int last1 = s[i - 1] - '0';
        if (last1 >= 1 && last1 <= 9) {
            dp[i] += dp[i - 1];
        }
        if (i >= 2) {
            int last2 = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
            if (last2 >= 10 && last2 <= 26) {
                dp[i] += dp[i - 2];
            }
        }
    }

    cout << dp.back();

    return 0;
}