#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int di, ci, d, c, n;
    cin >> d >> c >> n >> di >> ci;
    ci += di * 100;
    int64_t total = (d * 100 + c) * static_cast<int64_t>(n);
    if (total > ci) {
        cout << "-1\n";
        return 0;
    }
    total = ci - total;
    cout << total / 100u << ' ' << total % 100 << endl;

    return 0;
}
