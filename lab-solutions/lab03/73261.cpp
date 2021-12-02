#include <iostream>
using namespace std;

int main () {
    int n, a[500500];
    cin >> n;
    for (int i = 1; i <= n; ++ i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++ i) {
        a[i] = a[i] * a[i];
    }
    for (int i = 1; i <= n; ++ i) {
        cout << a[i] << ' ';
    }
    return 0;
}