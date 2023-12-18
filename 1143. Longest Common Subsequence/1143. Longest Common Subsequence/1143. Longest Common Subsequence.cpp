#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string text1, text2;
    cin >> text1 >> text2;
    int n = (int)text1.size();
    int m = (int)text2.size();
    vector <vector <int>> dp(n, vector <int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            dp[i][j] = 0;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (text1[i] == text2[0]) {
            for (int j = i; j < n; ++j) {
                dp[j][0] = 1;
            }
            ans = 1;
            break;
        }
    }
    for (int j = 0; j < m; ++j) {
        if (text2[j] == text1[0]) {
            for (int i = j; i < m; ++i) {
                dp[0][i] = 1;
            }
            ans = 1;
            break;
        }
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            if (text1[i] == text2[j]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                ans = max(ans, dp[i][j]);
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    
    cout << ans;

	return 0;
}