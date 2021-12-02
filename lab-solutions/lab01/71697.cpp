#include <iostream>

using namespace std;

int n, k;

int main() {
	cin>>n>>k;
	cout<<n + (k % 10 + k / 100);
	
	return 0;
}
