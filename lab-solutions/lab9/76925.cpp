#include<iostream>
#include<map>

using namespace std;

int n, k;
map<int, int> q;
int main(){
	cin >> n >> k;
	for(int i = 0; i < n; ++i){
		int x; 
		cin >> x;
		q[x]++;
	}
	cout << q[k] << "\n";
	return 0;
}