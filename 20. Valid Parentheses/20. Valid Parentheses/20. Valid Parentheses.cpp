#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	string data;
	cin >> data;
	stack <char> s;

	for (char c : data) {
		if (c == '(' || c == '[' || c == '{') {
			s.push(c);
		}
		else {
			if (!s.empty() && abs(c - s.top()) <= 2) {
				s.pop();
			}
			else {
				break;
			}
		}
	}

	cout << s.empty() << endl;

	return 0;
}