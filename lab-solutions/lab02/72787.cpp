#include <iostream>

using namespace std;

long long n;

int main() {
	cin >> n;
	long long x = 1;
	while(x * x <= n) {
		cout << x * x << "\n";
		++ x;
	}
	return 0;
}