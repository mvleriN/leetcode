﻿#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map <char, int> m = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };
    string s;
    cin >> s;
    int ans = 0;
    int prev = 0;

    for (int i = 0; i < s.size(); ++i) {
        cout << prev << ' ' << m[s[i]] << endl;
        if (prev < m[s[i]]) {
            ans = ans - 2 * prev;
        }
        ans += m[s[i]];
        prev = m[s[i]];
    }

    cout << ans;

    return 0;
}