class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        char c = '1';
        int ans1 = (c != s[0]);
        for (int i = 1; i < n; ++i) {
            if (i % 2 == 1) {
                c = '0';
            }
            else {
                c = '1';
            }
            if (c != s[i]) {
                ans1++;
            }
        }
        c = '0';
        int ans0 = (c != s[0]);
        for (int i = 1; i < n; ++i) {
            if (i % 2 == 1) {
                c = '1';
            }
            else {
                c = '0';
            }
            if (c != s[i]) {
                ans0++;
            }
        }
        return min(ans0, ans1);
    }
};