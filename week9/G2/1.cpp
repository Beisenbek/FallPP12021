#include <iostream>

using namespace std;

int f(int n){
    if(n == 1) return 1;
    return n + f(n - 1);
}

int f2(int n){
    int res = 0;
    for(int i = n; i >=1; --i){
        res += i;
    }
    return res;
}


int main(){

    int x;
    cin >> x;

    cout << f(x) << " " << f2(x) << endl;

    return 0;
}