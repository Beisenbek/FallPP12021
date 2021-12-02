#include<bits/stdc++.h>

using namespace std;

int rec(int sum, int n){
	if(n == 0){
		return sum;
	}
	
	sum += (n%10)/2;
	return rec(sum, n/10);
}

int main() {
	int n;
	cin >> n;
	
	int sum = 0;
	cout<<rec(sum, n);
	
	return 0;
}