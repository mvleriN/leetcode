#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a;

    while (n > 0) {
        a.push_back(abs(n % 10));
        n /= 10;
    }

    int k = a.size();
    for (int i = 0; i < k; ++i) {
        if (a[i] != a[k - i - 1]) {
            cout << 0;
            break;
        }
    }
    
    cout << 1;

    return 0;
}
