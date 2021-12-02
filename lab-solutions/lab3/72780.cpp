#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int a[500500];
    int mx = 0, mn = 1e9 + 17;
    for (int i = 1; i <= n; ++ i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++ i) {
        if (a[i] > mx)
            mx = a[i];
        if (a[i] < mn)
            mn = a[i];
    }
    for (int i = 1; i <= n; ++ i)
        if (a[i] == mx)
            a[i] = mn;
    for (int i = 1; i <= n; ++ i)
        cout << a[i] << ' ';
    return 0;
}