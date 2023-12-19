#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector <vector <int>> img(n, vector <int>(m)), imgSmooth(n, vector <int> (m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> img[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int k = 1, sum = img[i][j];
            if (i < n - 1) {
                sum += img[i + 1][j];
                k++;
            }
            if (i > 0) {
                sum += img[i - 1][j];
                k++;
            }
            if (j < m - 1) {
                sum += img[i][j + 1];
                k++;
            }
            if (j > 0) {
                sum += img[i][j - 1];
                k++;
            }
            if ((i < n - 1) && (j < m - 1)) {
                sum += img[i + 1][j + 1];
                k++;
            }
            if ((i > 0) && (j > 0)) {
                sum += img[i - 1][j - 1];
                k++;
            }
            if ((i > 0) && (j < m - 1)) {
                sum += img[i - 1][j + 1];
                k++;
            }
            if ((i < n - 1) && (j > 0)) {
                sum += img[i + 1][j - 1];
                k++;
            }

            //double value = (double)sum / (double)k;
            imgSmooth[i][j] = sum / k;
        }
    }
    cout << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << imgSmooth[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
