#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double hypotenuse(int a, int b) {
    
    return sqrt(a * a + b * b);
}

int a, b;

int main() {

    cin>>a>>b;
    cout<<setprecision(4)<<hypotenuse(a, b);

    return 0;
}