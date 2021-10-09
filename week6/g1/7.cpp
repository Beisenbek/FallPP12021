#include <iostream>

using namespace std;

int min2(int a, int b){
    if(a < b) return a;
    return b;
}

int main(){

    int x, y;
    cin >> x >> y;

    cout << min2(x, y) << endl;

    return 0;
}