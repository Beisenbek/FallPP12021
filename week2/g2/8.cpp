#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;


int main(){

    int x;
    cin >> x;

    if(x % 6 == 0)
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}