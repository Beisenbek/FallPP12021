#include <iostream>

using namespace std;


int main(){

    int n, k;
    cin >> n >> k;

    int m = 1;

    if(k >= n){
        cout << 2 * m << endl;
    }else{
        int t = 2 * n;
        int d = t / k;
        int r = t % k;
        if(r > 0) d = d + 1;
        cout << d * m << endl;
    }

    return 0;
}