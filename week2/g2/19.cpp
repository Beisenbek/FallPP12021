#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;


int main(){

    int n;
    cin >> n;

    while(n > 0){
        cout << n % 2;
        n /= 2;
    }

    return 0;
}