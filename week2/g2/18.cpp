#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;


int main(){

    int n;
    cin >> n;

    for(;n > 0; n /= 2){
        cout << n % 2;
    }

    return 0;
}