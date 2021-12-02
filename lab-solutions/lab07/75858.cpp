#include<bits/stdc++.h>

using namespace std;

void recursion(int cur, int n){
	if(cur > n)return;
	cout<<cur<<' ';
	recursion(cur+1, n);
}

int main() {
	int n;
	cin >> n;
	
	recursion(1, n);
	

	return 0;
}