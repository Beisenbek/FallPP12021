#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){


    stringstream ss;
    int x = 49;

    ss << x;

    string s;
    ss >> s;

    cout << s.size() << endl;

    return 0;
}