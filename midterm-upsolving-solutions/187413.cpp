#include <iostream>

using namespace std;

void print(int l, int r) {
	if (l%2==0)
		cout << l << " ";
	if (l >= r)
		return;
	print(l+1, r);
}

int main() {
	int l, r;
	cin >> l >> r;
	print(l, r);
}