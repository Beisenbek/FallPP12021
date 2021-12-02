#include <bits/stdc++.h>

using namespace std;

map <string, set <int> > mp;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		int k;
		cin >> s >> k;
		mp[s].insert(k);
	}
	for (auto s : mp) {
		cout << s.first << " ";
		if (s.second.size() < 3)
			cout << "NO BONUS" << endl;
		else cout << "+1" << endl;
	}
	return 0;
}