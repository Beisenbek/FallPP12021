#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

    stringstream ss;

    for(int i = 1; i<=100; ++i){
        ss.str("");
        ss << "data/" <<  i << ".txt";
        freopen(ss.str().c_str(), "w",stdout);
        cout << "test" << endl;
    }
   

    return 0;
}