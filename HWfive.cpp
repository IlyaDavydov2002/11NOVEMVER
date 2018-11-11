#include <iostream>
#include <vector>

using namespace std;
int main() {
	int m;
	vector<int> x;
	while (cin >> m, m != 0) {
		x.push_back(m);
	}
	for (auto &m : x) {
		int n, max = 1;

		for (n = 2; n < m; n++) {
			bool del = true;
			for (int l = 2; l < n; l++) {
				if (n % l == 0) {
					del = false;
				}
			}
			if (m % n == 0 && n > max && del) {
				max = n;
			}
		}
		cout << max << " ";
	}
	return 0;
}