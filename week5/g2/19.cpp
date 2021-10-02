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

    
    cout << ss.str() << endl;


    
    return 0;
}