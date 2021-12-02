#include <iostream>
#include <string>

using namespace std;

string make_change(string s) {
    string new_string = "";
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0 && s[i] >= 'a' && s[i] <= 'z') {
            new_string += s[i] - ' ';
            continue;
        }
        new_string += s[i];
    }

    return new_string;
}

string s;

int main() {
    cin >> s;
    cout << make_change(s);

    return 0;
}