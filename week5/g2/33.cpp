#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

    for(char c = 'A'; c <='Z'; ++c){
        cout << int(c) << " ";
    }
    cout << endl;
    
    for(char c = 'a'; c <='z'; ++c){
        cout << int(c) << " ";
    }

    return 0;
}