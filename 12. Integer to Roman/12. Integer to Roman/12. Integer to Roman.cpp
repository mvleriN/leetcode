#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector < pair <int, string > > m{ {1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, {40, "XL"}, {50, "L"}, {90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"} };
    int k = m.size() - 1;
    int n;
    cin >> n;

    string ans = "";
    while (n != 0) {
        while (m[k].first > n) {
            k--;
        }
        ans += m[k].second;
        n -= m[k].first;
    }

    cout << ans;
    return 0;
}