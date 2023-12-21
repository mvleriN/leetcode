#include <vector>
#include <iostream>

using namespace std;

int main(){
    int numRows;
    cin >> numRows;
    vector <vector <int>> dp;
    dp.push_back({ 1 });
    /*if (numRows == 1) {
        return dp;
    }*/
    dp.push_back({ 1, 1 });
    for (int i = 2; i < numRows; ++i) {
        vector <int> prevRow = dp.back();
        vector <int> currRow = { 1 };
        for (int j = 1; j < prevRow.size(); ++j) {
            currRow.push_back(prevRow[j] + prevRow[j - 1]);
        }
        currRow.push_back(1);
        dp.push_back(currRow);
    }

    for (int i = 0; i < dp.size(); ++i) {
        for (int j = 0; j < dp[i].size(); ++j) {
            cout << dp[i][j] << ' ';
        }
        cout << endl;
    }
    
    cout << tolower('0');
    return 0;
}
