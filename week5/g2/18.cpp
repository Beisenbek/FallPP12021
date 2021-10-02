#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    stringstream ss;

    int x = 49;
    string s = "abc";
    char c = 't';

    ss << x << " "<< s  << " "<< c;

    int q;

    ss >> q;
    cout << sqrt(q) << endl;

    ss >> q;
    cout << q << endl;


    
    return 0;
}