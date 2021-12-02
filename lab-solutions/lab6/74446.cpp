#include <iostream>
using namespace std;

int addition(int a, int b) { // functions gets two parameters its a and b
    return a + b; // return is like out of function 
    // returns a + b
}
int main () {
    int a, b;
    cin >> a >> b;
    cout << addition(a, b); // its sample how to call this function
    return 0;
}