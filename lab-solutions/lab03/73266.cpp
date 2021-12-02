#include <iostream>
using namespace std;

int main () {
    int n, a[500500];
    cin >> n;
    for (int i = 1; i <= n; ++ i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++ i) {
        for (int j = 1; j <= n; ++ j) {
            if (a[i] >= a[j])
                swap (a[i], a[j]);
        }
    }
    for (int i = 1; i <= n; ++ i) {
        cout << a[i] << ' ';
    }
    return 0;
}