#include <iostream>
using namespace std;

double persent_of_boys(int n, int m) {
    double x = m * 100;
    x = x / (n * 1.0);
    return x;
}
int main () {
    int n, m;
    cin >> n >> m;
    cout << persent_of_boys(n, m);
    return 0;
}