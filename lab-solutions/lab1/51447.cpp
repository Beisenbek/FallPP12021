#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;
	int m = 0;
	int k = 1;
	for (int i = 3; i >= 0; i--) {
		if ((n & (1 << i)) > 0) {
			m = m + k;
		}
		k *= 2;
	}
	cout << m;
	return 0;
}