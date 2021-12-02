#include<iostream> 
#include<algorithm>

using namespace std;

int cnt[10];
string s;

int main() {

	cin >> s;
	for(int i = 0;i < s.size();i ++) {
		cnt[s[i] - '0'] ++;
	}
	int maxi = 0,mini = int(1e9); 
	// 1e9 - 1000000000, we give very big number, such that this amount can't be exist in the stirng;
	for(int i = 0;i < 9;i ++) {
		if(cnt[i] == 0) continue;
		if(cnt[i] > maxi) maxi = cnt[i];
		if(cnt[i] < mini) mini = cnt[i];
	}
	if(maxi == mini) cout << "YES";
	else cout << "NO";
	return 0;
}