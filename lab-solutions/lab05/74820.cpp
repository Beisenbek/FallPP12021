#include<iostream> 
#include<algorithm>

using namespace std;

const int N = 100100;

string s;
string t;
int cnt[N],cnt1[N];

int main() {

	cin >> s >> t;

	// we keep two arrays, in each array we save amount letters in each string cnt for s, cnt1 for t.
	for(int i = 0;i < s.size();i ++) {
		cnt[s[i] - 'a'] ++; 
	}
	for(int i = 0;i < t.size();i ++) {
		cnt1[t[i] - 'a'] ++;
	}
	for(char i = 'a';i <= 'z';i ++) {
		if(cnt[i - 'a'] != cnt1[i - 'a']) {
			cout << "NO";
			exit(0);
		}
	}
	cout << "YES";
	return 0;
}