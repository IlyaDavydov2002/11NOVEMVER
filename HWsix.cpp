#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> x;
	int n;
	while (cin >> n, n != 0) {
		.push_back(n);
	}
	for (auto &n : x) {
		int k = 2, nm = 0;
		while (k < n) {
			if (n % k == 0) {
				nm++;
			}
			++;
			}
		if (nm >= 5) {
				cout << n << " ";
		}
	}
	return 0;
}
