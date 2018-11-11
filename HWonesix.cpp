#include <iostream>

using namespace std;

int main() {
	int n;
	int a[100][100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = 1;
		}
	}
	for (int i = 1; i < n - 1; i++) {
		for (int j = 1; j < n - 1; j++) {
			a[i][j] = 2;		
		}
	}
	for (int i = 2; i < n - 2; i++) {
		for (int j = 2; j < n - 2; j++) {
			a[i][j] = 3;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}