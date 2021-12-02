// functions task1
#include <iostream>
using namespace std;

int titleToNumber(string s) {
    long long pow = 0;
    for(int i = 0; i < s.size(); i++){
        pow = pow * 26 + ((int)s[i] - 'A' + 1);
    }
    return pow;
}

int main() {
    string s; cin >> s;
    cout << titleToNumber(s);  
    return 0;
}