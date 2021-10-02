#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){

    for(int i = 1; i <= 100; ++i){

        string s = "";
        int x = i;

        while(x > 0){
            s = char(x % 10 + 48) + s;
            x = x / 10;
        }
        
        string fname = "data/"+ s +".txt";
        freopen(fname.c_str(),"w",stdout);
            cout << "test";
    }

    return 0;
}