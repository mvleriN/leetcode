#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector <int> a = { 2, 4, 6 }, b = {1, 3, 5};

    for (int i = 0; i < b.size(); ++i) {
        a.push_back(b[i]);
    }

    sort(a.begin(), a.end());
    if (a.size() % 2 == 1) {
        cout << a[a.size() / 2];
    }
    else {
        cout << a[a.size() / 2];
        cout << (a[a.size() / 2] + a[a.size() / 2 - 1]) / 2;
    }

    return 0;
}