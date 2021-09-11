#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;


int main(){

    int x;
    cin >> x;

    if(x % 2 == 0 && x % 3 == 0)
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}