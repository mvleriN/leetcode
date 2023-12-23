class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n = paths.size();
        int m = 2;
        map <string, pair <int, int>> hashmap;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                hashmap[paths[i][j]].first++;
                hashmap[paths[i][j]].second = j;
            }
        }
        for (auto& e : hashmap) {
            if (e.second.first == 1 && e.first != paths[0][0] && e.second.second == 1) {
                return e.first;
            }
        }
        return "";
    }
};