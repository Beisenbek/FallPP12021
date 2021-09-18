#include <iostream>

using namespace std;


int main(){

    int i = 1;
    int k = ++i;

    int j = 1;
    int l = j++;

    cout << i << "  " << j << endl;
    cout << k << "  " << l << endl;

    return 0;
}