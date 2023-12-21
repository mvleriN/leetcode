#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector <vector <int>> matrix(n, vector <int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    vector <int> ans(n * m);
    for (int j = 0; j < m; ++j) {

    }

    return 0;
}