#include <bits/stdc++.h>

using namespace std;

bool ispalindrome(string s) {
	string rev = s;
	reverse(s.begin(), s.end());
	return rev==s;
}

int main() {
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	do {
		if (ispalindrome(s)) {
			cout << "ZA WARUDO TOKI WO TOMARE" << endl;
			return 0;
		}
	} while(next_permutation(s.begin(), s.end()));
	cout << "JOJO";
	return 0;
}