static const int ZERO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
    }();

    class Solution {
    public:
        vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
            int n = grid.size();
            int m = grid[0].size();
            vector <int> dpRows(n, 0), dpCols(m, 0);

            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    if (grid[i][j] == 1) {
                        dpRows[i]++;
                        dpCols[j]++;
                    }
                }
            }
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    grid[i][j] = 2 * (dpRows[i] + dpCols[j]) - n - m;
                }
            }
            return grid;
        }
    };