class Solution {
public:
    bool isPathCrossing(string path) {
        int n = path.size();
        vector <vector <bool>> matrix(2 * n + 1, vector <bool>(2 * n + 1, false));
        int idx_i = n;
        int idx_j = n;
        matrix[idx_i][idx_j] = true;
        for (int i = 0; i < n; ++i) {
            if (path[i] == 'N') {
                idx_i++;
                if (!matrix[idx_i][idx_j]) {
                    matrix[idx_i][idx_j] = true;
                }
                else {
                    return true;
                }
            }
            if (path[i] == 'S') {
                idx_i--;
                if (!matrix[idx_i][idx_j]) {
                    matrix[idx_i][idx_j] = true;
                }
                else {
                    return true;
                }
            }
            if (path[i] == 'E') {
                idx_j++;
                if (!matrix[idx_i][idx_j]) {
                    matrix[idx_i][idx_j] = true;
                }
                else {
                    return true;
                }
            }
            if (path[i] == 'W') {
                idx_j--;
                if (!matrix[idx_i][idx_j]) {
                    matrix[idx_i][idx_j] = true;
                }
                else {
                    return true;
                }
            }
        }
        return false;
    }
};