#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s, ans = "";
    cin >> s;

    int k;
    cin >> k;
    if (k == 1) {
        cout << s;
        return 0;
    }
    vector <string> a(k);
    int row = 0;
    bool down;
    for (int i = 0; i < s.size(); ++i) {
        a[row].push_back(s[i]);
        if (row == k - 1) {
            down = false;
        }
        else {
            if (row == 0) {
                down = true;
            }
        }
        if (down) {
            row++;
        }
        else {
            row--;
        }
    }

    for (int i = 0; i < k; ++i) {
        ans += a[i];
    }

    cout << ans;

    return 0;
}