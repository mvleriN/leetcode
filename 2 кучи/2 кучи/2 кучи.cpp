#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	if (n > m) {
		swap(n, m);
	}
	
	if (n == 0 || (n == 1 && m == 1)) {
		cout << "Loose";
	}
	else {
		if ((n == 1 && m == 2) || (n == 2 && m == 2)) {
			cout << "Win";
		}
	}
	cout << "Win";

	return 0;
}