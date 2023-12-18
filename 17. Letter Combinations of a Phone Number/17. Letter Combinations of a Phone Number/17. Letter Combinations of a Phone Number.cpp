#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    map <char, string> dict = { {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"} };
    string s;
    vector <string> ans(1, "");
    cin >> s;
    
    for (int i = 0; i < s.size(); ++i) {
        vector <string> curr;
        for (auto e : ans) {
            string data = dict[s[i]];
            for (int j = 0; j < data.size(); ++j) {
                curr.push_back(e + data[j]);
            }
        }
        curr.swap(ans);
    }

    for (auto e : ans) {
        cout << e << endl;
    }

    return 0;
}