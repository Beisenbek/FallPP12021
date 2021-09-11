#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;


int main(){

    int i = 0;
    int l = 0;

    int j = ++i;
    int r = l++;

    cout << j<< endl;
    cout << r<< endl;

    //cout << i<< endl;
    //cout << l<< endl;

    int k = 1;
    cout << k++ + ++k << endl;

    //[1] + [3]

    return 0;
}