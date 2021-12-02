#include <iostream>
using namespace std;

int main () {
    int n, m, k;
    cin >> n >> m;
    int a[500500];
    for (int i = 1; i <= n; ++ i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++ i) {
        if (a[i] < m)
            k = i;
    }
    cout << k;
    return 0;
}