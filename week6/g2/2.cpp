#include <iostream>

using namespace std;

int apb(int a, int b);

int main(){

    int x, y;
    cin >> x >> y;

    cout << apb(x, y) << endl;


    return 0;
}

int apb(int a, int b){
    return a + b;
}