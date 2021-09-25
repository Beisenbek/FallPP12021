#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
           cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j <= i; ++j){
           int x = sqrt(a[i][j]);
           if(x * x == a[i][j]){
               a[i][j] = x;
           }
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}