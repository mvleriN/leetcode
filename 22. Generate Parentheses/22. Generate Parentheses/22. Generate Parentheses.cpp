#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

bool IsValid(string s, int n) {
	stack <char> stack_;
	for (int i = 0; i < n; ++i) {
		if (s[i] == '(') {
			stack_.push(s[i]);
		}
		else {
			if (!stack_.empty() && abs(s[i] - stack_.top()) <= 2) {
				stack_.pop();
			}
			else {
				return false;
			}
		}
	}
	
	return stack_.empty();
}

int main(){
	int n;
	cin >> n;
	string s = "";
	for (int i = 1; i <= n; ++i) {
		s += '(';
	}
	
	for (int i = 1; i <= n; ++i) {
		s += ')';
	}
	vector <string> ans;
	ans.push_back(s);
	n *= 2;
	while (next_permutation(s.begin(), s.end())) {
		if (IsValid(s, n)) {
			ans.push_back(s);
		}
	}

	for (string& e : ans) {
		cout << e << endl;
	}
	return 0;
}