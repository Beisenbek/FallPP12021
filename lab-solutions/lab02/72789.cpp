#include<iostream>

using namespace std;

long long n;

int main() {
	cin >> n;
	long long cur = 1;
	while(cur <= n) {
		cout << cur << " ";
		cur *= 2;
	}
	return 0;
}