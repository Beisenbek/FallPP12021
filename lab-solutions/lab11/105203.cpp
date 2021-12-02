#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int grid[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> grid[i][j];
		}
	}
	bool ok = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((grid[i][j]+grid[i][j+1]+grid[i+1][j]+grid[i+1][j+1] % 4)==0)
				ok = false;
		}
	}
	if (ok)
		cout << "YES";
	else cout << "NO";
	return 0;

	
}
