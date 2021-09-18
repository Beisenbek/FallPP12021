#include <iostream>

using namespace std;

int main(){

    int i = 0;

    for(; i < 10;){
        cout << i << " ";
        cout << i * 2 << " ";
        ++i;
    }

    return 0;
}