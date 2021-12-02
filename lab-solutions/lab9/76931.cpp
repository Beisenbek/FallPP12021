#include<iostream>
#include<map>

using namespace std;

int n;
map<int, int> q;
int main(){
	cin >> n;
	for(int i = 0; i < n; ++i){
		int x; 
		cin >> x;
		q[x]++;
	}
	int ans = 0;
	for(map<int, int> :: iterator it = q.begin(); it != q.end(); ++it){
		if(it->second > 1) ans++;
	}
	cout << ans << "\n";
	return 0;
}