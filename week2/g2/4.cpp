#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;


int main(){

    int x;
    cin >> x;

    cout << sqrt(x) << endl;

    printf("%.10f\n",sqrt(x));

    cout << setprecision(11) << sqrt(x) << endl;

    return 0;
}