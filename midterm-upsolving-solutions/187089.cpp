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
    int k;
    cin >> k;
    int ind = 0, ans = abs(a[0] - k);

    for (int i = 1; i < n; ++i) {
        int cur = abs(a[i] - k);
        if (cur < ans) {
            ans = cur;
            ind = i;
        }
    }

    cout << ind << endl;

    return 0;
}
