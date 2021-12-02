#include <iostream>
using namespace std;

int main () {
    int n, m, k;
    cin >> n;
    int a[500500], b[500500], c[500500];
    for (int i = 1; i <= n; ++ i) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 1; i <= m; ++ i) {
        cin >> b[i];
    }
    int x = 1, y = 1;
    a[n + 1] = 1e9 + 17;
    b[m + 1] = 1e9 + 17;
    for (int i = 1; i <= n + m; ++ i) {
        if (a[x] >= b[y]) {
            c[i] = b[y];
            ++ y;
        }
        else
            c[i] = a[x], ++ x;
    }
    for (int i = 1; i <= n + m; ++ i) {
        cout << c[i] << ' ';
    }
    return 0;
}