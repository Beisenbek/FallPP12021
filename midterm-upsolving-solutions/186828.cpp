#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool IsPerfectNumber(int num) {
    return num % 3 == 0;
}

int main() {
    int ans = 0;

    while (true) {
        int x;
        cin >> x;
        if (!IsPerfectNumber(x)) {
            break;
        }
        ++ans;
    }

    cout << ans << endl;

    return 0;
}
