#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    stringstream ss;
    ss << "49";

    int x;
    ss >> x;

    cout << sqrt(x);
    


    
    return 0;
}