#include <iostream>
#include <string>
#include <string_view>
#include <vector>

using namespace std;

int main() {
    string s; //string_view when using class
    cin >> s;
    int k;
    cin >> k;
    vector <string> wordDict(k);
    for (int i = 0; i < k; ++i) {
        cin >> wordDict[i];
    }
    int n = (int)s.size();
    vector <bool> canSplit(n + 1, false); //canSplit[prefixSize]
    canSplit[0] = true;

    for (int prefixLen = 1; prefixLen <= n; ++prefixLen) {
        string prefix = s.substr(0, prefixLen); //string view when using class
        for (const string& word : wordDict) {
            if (((int)word.size() <= prefixLen) && canSplit[prefixLen - (int)word.size()]) {
                if (word == prefix.substr(prefixLen - (int)word.size())) {
                    canSplit[prefixLen] = true;
                    break;
                }
            }
        }
    }

    cout << canSplit.back();

    return 0;
}