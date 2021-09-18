#include <iostream>

using namespace std;


int main(){

    int x;
    cin >> x;

    do{
        cout << x % 10 << " ";
        x = x / 10;
    }while(x > 0); 


    return 0;
}