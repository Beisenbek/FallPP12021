#include <iostream>

using namespace std;


int a[1000000000000000];

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i <= n - 1; ++i){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}