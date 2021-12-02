#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "No";
        return 0;
    }
    for (int i = 2; i * i <= n; ++ i) {
        if (n % i == 0) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}