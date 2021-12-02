#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int z;
    cin >> z;

    for (int i = 0; i < n; ++i) {
        int ind = (i - z + n) % n;
        cout << a[ind] << ' ';
    }
    cout << endl;

    return 0;
}
