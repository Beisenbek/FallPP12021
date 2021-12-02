#include <iostream>

using namespace std;

string s,t;
int l,r;

int main() {

	//abcdeffecba
	cin >> s >> l >> r;
	for(int i = l;i <= r;i ++) cout << s[i];
	return 0;
}