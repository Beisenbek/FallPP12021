#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

    char c;
    cin >> c;

    if(c >='a' && c <='z'){
        c = char(c - 32);
    }

    cout << c << endl;
   

    return 0;
}