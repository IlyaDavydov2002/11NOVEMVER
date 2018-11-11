#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
		for (int i = 0; i <= n - 1; i++) {
			for (int j = 0; j <= n - 1; j++) {
				if (i + j < n) {
					cout << j + i + 1 << " ";
				}
				else {
					cout << abs((i - n + 1) + (j - n + 1)) + 1<< " ";
				}
			}
			cout << endl;
		}
		return 0;
}