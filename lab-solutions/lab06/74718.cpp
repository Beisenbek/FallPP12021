#include <iostream>

using namespace std;

bool isValidString(string s, int n) {
	int counter = 0;
	for (int i = 0; i < s.size(); i++){
		char c = s[i];
		if (c >= '0' && c<= '9') counter++;
	}
	
	return counter >= n;		
}

int n;
string s;

int main() {
	
	cin >> s >> n;
	if (isValidString(s, n)) {
		cout<< "YES";
	} else {
		cout<< "NO";
	}

    return 0;
}
