#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){


    stringstream ss;

    ss << "test" << " 49";

    string s;
    int t;

    ss >> s >> t;

    cout << s << endl;
    cout << sqrt(t) << endl;


    return 0;
}