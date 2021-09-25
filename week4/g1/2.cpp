//lab3 - K
#include <iostream>

using namespace std;

int main (){

    int x;
    cin >> x;

    int a[x];

    for (int i = 0; i < x; i++) {
        cin >> a[i];
        if(i != 0 && a[i] == a[i - 1]) continue;
        cout << a[i] << " ";
    }

    return 0;

}   