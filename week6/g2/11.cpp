
#include <iostream>

using namespace std;

int phi(int n){
    if(n == 0 || n == 1) return 1;
    int a = 1;//0
    int b = 1;//1
    int c = -1;
    for(int i = 2; i <= n; ++i){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main(){

    int n;
    cin >> n;

    cout << phi(n) << endl;

    return 0;
}
