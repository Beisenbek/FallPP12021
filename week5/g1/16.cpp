#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){


    stringstream ss;

    ss << "test" << " 49";

    cout << ss.str() << endl;

    return 0;
}