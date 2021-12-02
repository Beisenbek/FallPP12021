#include<iostream> 

using namespace std;

string s;

int main() {

	cin >> s;

	for(int i = 0;i < (int)s.size();i ++) {
		if(s[i] >= 'a' && s[i] <= 'z') {
			s[i] = s[i] - 'a' + 'A';
		}
	}

	cout << s;

	return 0;
}