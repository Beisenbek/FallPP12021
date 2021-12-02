#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s, t;
    char c;
    cin >> s >> t >> c;

    size_t found = s.find_first_of(t);
    while (found != string::npos) {
        s[found] = c;
        found = s.find_first_of(t, found + 1);
    }

    cout << s << endl;

    return 0;
}
