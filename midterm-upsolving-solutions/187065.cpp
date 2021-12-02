#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool IsTwo(int i, int j, int n, int m) {
    return i - j == n - m ||
           i + j == n + m ||
           i == n ||
           j == m;
}

int main() {
    int n, m;
    cin >> n >> m;
    if (n > 7 || m > 7) {
        cout << "Impossible\n";
        return 0;
    }
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (i == n && j == m) {
                cout << 1;
            } else if (IsTwo(i, j, n, m)) {
                cout << 2;
            } else {
                cout << '*';
            }
            cout << ' ';
        }
        cout << endl;
    }

    return 0;
}
