#include <iostream>

using namespace std;

bool isValidString(string s, int n) {
	int counter = 0;
	for (int i = 0; i < s.size(); i++) {
		char c = s[i];
		if (c >= '0' && c <= '9') counter++;
		else counter = 0;
		if (counter == n) return true;
	}

	return false;
}

string s;
int n;

int main() {
	
	cin >> s >> n;
	if (isValidString(s, n)) {
		cout<<"Valid";
	} else {
		cout<<"Not valid";
	}
    return 0;
}
