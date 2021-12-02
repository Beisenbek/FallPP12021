#include<bits/stdc++.h>

using namespace std;

string s,t;

int main() {
	cin >> s;
	int sum = 0,sum1 = 0;
	for(int i = 0;i < s.size();i ++) {
	    if(i % 2 == 0) {
	        sum += s[i] - '0'; 
	    } else {
	        sum1 += s[i] - '0';
	    }
	}
	if(sum == sum1)
	    cout << "YES";
	else
	    cout << "NO";
	return 0;
}