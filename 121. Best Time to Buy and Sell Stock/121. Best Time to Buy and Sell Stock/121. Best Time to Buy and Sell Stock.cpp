#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    int minVal = prices[0];
    int ans = 0;
    for (int i = 1; i < prices.size(); ++i) {
        if (prices[i] < minVal) {
            minVal = prices[i];
        }
        else {
            ans = max(ans, prices[i] - minVal);
        }
    }

    cout << ans;
    return 0;
}