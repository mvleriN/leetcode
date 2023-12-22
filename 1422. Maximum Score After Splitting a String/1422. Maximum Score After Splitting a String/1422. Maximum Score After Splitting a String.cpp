#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    int left = 0;
    int right = count(s.begin(), s.end(), '1');

    for (int i = 0; i < s.size() - 1; ++i) {
        left += (s[i] == '0');
        right -= (s[i] == '1');
        ans = max(ans, left + right);
    }

    cout << ans;

    return 0;
}
