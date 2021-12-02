#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector <map <char, int> > hash;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		map <char, int> m;
		for (int j = 0; j < s.size(); j++) {
			m[s[j]]++;
		}
		hash.push_back(m);
	}
    bool pr = false;
	for (char ch = 'a'; ch <= 'z'; ch++) {
		bool ok = true;
		for (auto h : hash) {
			if (h[ch]==0) {
				ok = false;
			}
		}
		if (ok) {
			cout << ch << " ";
			pr = true;
		}

	}
	if (!pr)
	    cout << "NO COMMON CHARACTERS";
	return 0;
}