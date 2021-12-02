#include <bits/stdc++.h>
using namespace std;

long long gcd_(long long n, long long m){
    while(n > 0 && m > 0){
        if(n > m)
            n = n % m;
        else m = m % n;
    }
    return n + m;
}


int main(){
    long long n, m; cin >> n >> m;
    cout << gcd_(n, m);

    return 0;
}