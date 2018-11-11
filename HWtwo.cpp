#include <iostream>
using namespace std;
int main() {
	long long n, p = 1;
	cin >> n;
	if (n % 2 == 0) {
		while (n != 0) {
			if ((n % 10) % 2 == 0) {
				p = p + n % 10;
						}
		n = n / 10;
		}

	}
	else {
		while (n != 0) {
			if ((n % 10) % 2 != 0) {
				p = p + n % 10;
			}
			n = n / 10;
		}
	}
	cout << p;
	return 0;
}