#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    char ans = s[0], cur = s[0];
    int maxi = 1, cur_maxi = 1;
    for (size_t i = 1; i < s.size(); ++i) {
        if (s[i] != cur) {
            if (cur_maxi > maxi) {
                ans = cur;
                maxi = cur_maxi;
            }
            cur_maxi = 1;
            cur = s[i];
        } else {
            cur_maxi++;
        }
    }
    if (cur_maxi > maxi) {
        ans = cur;
        maxi = cur_maxi;
    }
    cout << ans << ' ' << maxi << endl;

    return 0;
}
