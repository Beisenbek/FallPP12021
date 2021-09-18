#include <iostream>

using namespace std;

int main(){

    int i = 1;//2
    
    int j = i++ + ++i;

    cout << j << endl;

    cout << i << endl;

    return 0;
}
