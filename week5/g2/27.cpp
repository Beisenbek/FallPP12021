#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>


using namespace std;

int main(){

    for(int i = 1; i<=100; ++i){
        string s = "";
        int x = i;

        do{
            s = char(x % 10 + 48) + s;
            x = x / 10;
        }while(x > 0);

        string fname = "data/" + s + ".txt";
        
        freopen(fname.c_str(), "w",stdout);
        cout << "test" + s << endl;

    }
   

    return 0;
}