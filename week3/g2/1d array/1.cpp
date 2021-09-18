#include <iostream>

using namespace std;

int main(){

    int a[10];
    int x;

    for(int i = 0; i < 10; ++i){
        cin >> x;
        a[i] = x;
    }

    for(int i = 0; i < 10; ++i){
        cout << a[i] << " ";
    }
    cout << endl;




    return 0;
}