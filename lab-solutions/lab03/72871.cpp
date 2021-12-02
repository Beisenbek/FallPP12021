#include <iostream>
using namespace std;

int main () {
    int n, l, r;
    cin >> n >> l >> r;
    long long ans = 0;
    int a[500500];
    for (int i = 1; i <= n; ++ i) {
        cin >> a[i];
    }
    for (int i = 1; i < l; ++ i)
        cout << a[i] << ' ';
    for (int i = r; i >= l; -- i)
        cout << a[i] << ' ';
    for (int i = r + 1; i <= n; ++ i)
        cout << a[i] << ' ';
    
    return 0;
}