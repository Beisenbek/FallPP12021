#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    stringstream myss;
    myss << 49;

    string x;
    myss >> x;

    cout << x.size() << endl;
    


    
    return 0;
}