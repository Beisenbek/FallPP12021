#include <iostream>

using namespace std;

int main(){

    string s;
    getline(cin, s);

    string x = s.substr(0, 2);

    cout << x << " " << s << endl;

    return 0;
}