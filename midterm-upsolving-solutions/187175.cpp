#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

double GetPriceQualityRatio(int price, int quality) {
    return (quality * 1.) / price;
}

int main() {
    int n;
    cin >> n;
    string s;
    int p, q;

    string best_phone;
    double best_ratio;

    for (int i = 0; i < n; ++i) {
        cin >> s >> p >> q;
        double ratio = GetPriceQualityRatio(p, q);
        if (i == 0 || ratio > best_ratio) {
            best_ratio = ratio;
            best_phone = s;
        }
    }

    cout << best_phone << endl;

    return 0;
}
