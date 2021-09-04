#include <iostream>

using namespace std;

int main(){

    int a, k;
    cin >> a >> k;

    cout << a + k % 10 + k / 100 << endl;

    return 0;
}