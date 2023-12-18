#include <vector>
#include <iostream>

using namespace std;

int main() {
	vector <int> nums = { 2,3,-2,4 };
	int n = nums.size();
	int ans = nums[0]	;

	int currProd = 0;
	for (int i = 0; i < n; ++i) {
		if (currProd == 0) {
			currProd = nums[i];
		}
		else {
			currProd *= nums[i];
		}
		ans = max(ans, currProd);
	}
	
    currProd = 0;
	for (int i = n - 1; i >= 0; --i) {
		if (currProd == 0) {
			currProd = nums[i];
		}
		else {
			currProd *= nums[i];
		}
		ans = max(ans, currProd);
	}

	cout << ans;

	return 0;
}