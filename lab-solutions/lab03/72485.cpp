#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int a[500500];
    for (int i = 1; i <= n; ++ i) {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++ i) {
        if (a[i] > 0)
            ++ cnt;
    }
    cout << cnt;
    return 0;
}