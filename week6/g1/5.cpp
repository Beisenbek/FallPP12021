#include <iostream>

using namespace std;

int apb(int a, int b){
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return a + b;
}

int main(){

    int a, b;
    cin >> a >> b;

    cout << apb(b, a) << endl;


    return 0;
}





