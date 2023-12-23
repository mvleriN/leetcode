#include <string>
#include <iostream>
#include <set>

using namespace std;

int main() {
    string s, digit = "";
    getline(cin, s);
    int sign, ans = 0, i = 0;

    while (s[i] == ' ') {
        i++;
    }

    if ((s[i] == '-') || (s[i] == '+')) {
        sign = 1 - 2 * (s[i++] == '-');
    }

    while ((s[i] >= '0') && (s[i] <= '9')) {
        if ((ans > INT_MAX / 10) || ((ans == INT_MAX / 10) && (s[i] - '0' > 7))) {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        ans = ans * 10 + (s[i++] - '0');
    }
    
    cout << ans * sign;

    return 0;
}