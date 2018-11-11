#include <iostream>

using namespace std;

int main()
{
	int n, p, x;
	p = 1;
	cin >> n;
	x = n % 10;
	while (n != 0) {
		if (x % 2 == 0) {
			if ((n % 10) % 2 == 0) {
				p = p * (n % 10);
				n = n / 10;
			}
			else if ((n % 10) % 2 != 0) {
				p = p;
				n = n / 10;
			}
		}
		else if (x % 2 != 0) {
			if ((n % 10) % 2 != 0) {
				p = p * (n % 10);
				n = n / 10;
			}
			else if ((n % 10) % 2 == 0) {
				p = p;
				n = n / 10;
			}
		}
		cout << p;
	}
	return 0;
}