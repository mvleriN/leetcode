#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x;
    cin >> x;
    
    int ans = 0, sign;
    if (x < 0) {
        sign = -1;
    }
    else {
        sign = 1;
    }

    x = abs(x);

    while (x > 0) {
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
            return 0;
        }
        ans = ans * 10 + x % 10;
        x = x / 10;
    }

    cout << ans * sign;

    return 0;
}