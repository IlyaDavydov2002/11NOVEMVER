#include <iostream>                                         //нада 0 в конце
#include <vector>
using namespace std;                                     
int main() {
	setlocale(LC_ALL, "Russian");
	vector<int> x;
	int i, sum = 0;
	while (cin >> i, i != 0) {
		x.push_back(i);
	}
	for (auto &i : x) {
		int k;
		bool p, is = true;
		if (i == 1) {
			p = false;
			is = true;
		}
		for (k = 2; k <= sqrt(i); k++) {
			if (i % k == 0) {
				is = false;
				p = false;
				break;
			}
			else {
				p = true;
			}
			}
		if (p, is) {
				sum++;
        }        
	}
	 
	cout << sum;
	return 0;
	
}