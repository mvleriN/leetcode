#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Interval {
	int l;
	int r;
};

bool cmp(Interval a, Interval b) {
	return a.r < b.r;
}
int main() {
	int n;
	cin >> n;
	vector <Interval> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i].l >> a[i].r;
	}

	sort(a.begin(), a.end(), cmp);
	int ans = 1;
	int curr = a[0].r;
	for (int i = 1; i < n; ++i) {
		if (a[i].l > curr) {
			ans++;
			curr = a[i].r;
		}
	}

	cout << ans;
	return 0;
}