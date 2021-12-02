#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    int multiplier = 1;
    if (b < a) {
        multiplier = -1;
        swap(a, b);
    }

    int power = 0;
    while (b > a && b % 2 == 0) {
        b >>= 1;
        ++power;
    }
    if (b == a) {
        cout << "YES " << power * multiplier << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
