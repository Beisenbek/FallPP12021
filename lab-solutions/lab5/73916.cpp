#include<bits/stdc++.h>

using namespace std;

string s,t;

int main() {

	cin >> s;
	for(int i = 0;i < (int)s.size() / 2;i ++) {
		if(s[i] != s[(int)s.size() - i - 1]) {
			cout << "NO";
			exit(0);
		}
	}
	cout << "YES";
	return 0;
}
