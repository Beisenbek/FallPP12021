#include <iostream>

using namespace std;

int main(){

    int i = 1;
    int j = ++i;

    cout << i << " " << j << endl;

    int a = 1;
    int b = a++;

    cout << a << " " << b << endl;


    return 0;
}