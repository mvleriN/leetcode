#include <string>
#include <iostream>
#include <algorithm>
#include <set>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    double startTime, endTime;
    startTime = clock();
    string s = "xbkzbrrwmrmqgqcbuxdtwuuloqfargoqkzrlqiiecwukozljwpeulyharmckvrafsrqibaody";
    //cin >> s;
    int n = s.size();

    for (int currlen = n; currlen > 0; --currlen) {
        string w = "";
        for (int i = 0; i < n; ++i) {
            w = s.substr(i, currlen);
            set <char> check;
            for (char c : w) {
                check.insert(c);
            }
            if (check.size() == currlen) {
                cout << currlen << endl;
                endTime = clock();
                cout << endTime - startTime;
                return 0;
                //return currlen;
            }

            w = "";
        }
    }
    return 0;
}