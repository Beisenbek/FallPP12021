#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long x;
    cin >> x;

    int res = 0;
    while (x > 9) {
        res += x % 10;
        x /= 10;
    }

    if (res % 10 == x) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
