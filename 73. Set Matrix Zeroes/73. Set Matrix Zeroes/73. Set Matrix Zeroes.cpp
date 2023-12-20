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
    vector <vector <bool>> visited(n, vector <bool>(m, false));
    int idx = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!visited[i][j] && matrix[i][j] == 0) {
                for (int k = 0; k < m; ++k) {
                    if (matrix[i][k] != 0) {
                        visited[i][k] = true;
                    }
                    matrix[i][k] = 0;
                }
                for (int k = 0; k < n; ++k) {
                    if (matrix[k][j] != 0) {
                        visited[k][j] = true;
                    }
                    matrix[k][j] = 0;
                }
            }
            visited[i][j] = true;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

	return 0;
}