#include <iostream>

using namespace std;

int min2(int a, int b){
    if(a < b) return a;
    return b;
}

int min3(int a, int b, int c){
    return min2(a, min2(b, c));
}

int min4_1(int a, int b, int c, int d){
    return min2(min2(a,b), min2(c, d));
}

int min4_2(int a, int b, int c, int d){
    return min2(min3(a, b, c), d);
}

int main(){

    int x, y, z;
    cin >> x >> y >> z;

    cout << min3(x, y, z) << endl;

    return 0;
}