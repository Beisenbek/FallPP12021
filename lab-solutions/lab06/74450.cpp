#include <iostream>
using namespace std;

int module(int x) { 
    if (x < 0)
        return x * -1;
    return x;
}

int main () {
    int x;
    cin >> x;
    cout << module(x);
    return 0;
}