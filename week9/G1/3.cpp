#include <iostream>

using namespace std;

int memo[1000];

int f(int n){
    if(n >= 1000) return -1;
    if(memo[n] == -1){
        memo[n] = f(n - 1) + f(n - 2);
    }
    return memo[n];
}

int main(){

    int x;
    cin >> x;

    for(int i = 0; i < 1000; ++i){
        memo[i] = -1;
    }
    memo[0] = memo[1] = 1;
    cout << f(x) << endl;


    return 0;
}