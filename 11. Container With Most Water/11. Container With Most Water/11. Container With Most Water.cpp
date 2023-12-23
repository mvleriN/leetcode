#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int left = 0;
	int right = n - 1;

	int sMax = 0;
	int sCurr;
	while (right - left > 0) {
		sCurr = (right - left) * min(a[left], a[right]);
		if (sCurr > sMax) {
			sMax = sCurr;
		}
		if (a[left] <= a[right]) {
			left++;
		}
		else {
			right--;
		}
	}

	cout << sMax;

	return 0;
}