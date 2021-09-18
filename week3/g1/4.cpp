#include <iostream>

using namespace std;

int main(){

    int i = 0;

    do{
        cout << i << " ";
        cout << i * 2 << " ";
        ++i;
    }while(i < 10);

    return 0;
}