#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define vi vector<int>
#define sz(a) (int((a).size()))
#define mp make_pair
#define f first
#define s second
#define pii pair<int, int>

using namespace std;


int n;
int a[111];

int main() {

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	for (int i = 2; i <= n; i++) {
		if (a[i] < a[i - 1]) {
			cout << "Not sorted\n";
			return 0;
		}
	}
	
	cout << "Sorted\n";
			
	return 0;
}
