#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    cin >> n;
    int res = 0;

    for (int i = 0 ; i < n ; i++) {
        int x;
        cin >> x;
        res ^= x;
    }

    int f = 1;
    while (f < res) {
        f <<= 1;
    }

    if (f == res) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}
