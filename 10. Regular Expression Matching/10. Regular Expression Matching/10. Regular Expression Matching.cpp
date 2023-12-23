#include <string>
#include <iostream>

using namespace std;

int main() {
    string s, p;
    cin >> s >> p;

    string mask = p;
    for (int i = 0; i < s.size(); ++i) {
        char curr = s[i];
        if (p[i] == '.') {
            mask[i] = s[i];
        }
        else {
            if (p[i] == '*') {
                mask = ;
            }
        }
    }

    return 0;
}