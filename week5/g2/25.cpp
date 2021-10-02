#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>



using namespace std;

int main(){
    int x = 49;

    char buffer[10];

    itoa(x, buffer, 10);

    cout << buffer << endl;

    return 0;
}