#include<bits/stdc++.h>

using namespace std;

const int N = 100100;

string s;
int ans,ans1;

int main()
{
	cin >> s;
	for(int i = 0;i < s.size();i ++) {
		if(s[i] >= 'a' && s[i] <= 'z') ++ ans;
		else ++ ans1;
	}

	cout << ans << " " << ans1;
	return 0;
}