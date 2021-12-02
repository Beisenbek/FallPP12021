#include<bits/stdc++.h>

using namespace std;

string s;

int main() {

	cin >> s;

	int l = 0,r = int(s.size()) - 1;

	int cnt = 0;
	// we keep to pointers, on the end of the string, and on the beginning, if letters are
	// unequal we try to pass it by one, if we can't pass it or do this operation before,
	// this is impossible to make condition true.
	while(r > l) {
		if(s[l] == s[r]) {
			l ++;r --;
		} else {
			cnt ++;
			if(cnt >= 2) {
				cout << "NO";
				exit(0);
			}
			if(s[l + 1] == s[r]) ++ l;
			else if(s[r - 1] == s[l]) -- r;
			else {
				cout << "NO";
				exit(0);
			}
		}
	}
	cout << "YES";
	//abcdeffecba
	return 0;
}