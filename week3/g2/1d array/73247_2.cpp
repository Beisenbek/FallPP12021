#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int m;
    cin >> m;
    int b[m];
    for(int i = 0; i < m; ++i){
        cin >> b[i];
    }

    int z = n + m;
    int c[z];
    for(int i = 0; i < n; ++i){
        c[i] = a[i];
    }
    for(int i = 0; i < m; ++i){
        c[n + i] = b[i];
    }

    sort(c, c + z);

    for(int i = 0; i < z; ++i){
        cout << c[i] << " ";
    }


    return 0;
}