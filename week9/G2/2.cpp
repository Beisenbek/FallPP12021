#include <iostream>

using namespace std;

long long f(int n){
    if(n == 0) return 1;
    if(n == 1) return 1;
    return f(n-1) + f(n-2);
}



int main(){

    int x;
    cin >> x;

    cout << f(x) << endl;

    return 0;
}