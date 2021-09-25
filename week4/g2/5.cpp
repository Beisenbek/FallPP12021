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
        int s = 0;
        for(int j = 0; j < m; ++j){
           s += a[i][j];
        }
        printf("The sum of row number %i is %i\n", i + 1, s);
    }

    for(int i = 0; i < m; ++i){
        int s = 0;
        for(int j = 0; j < n; ++j){
           s += a[j][i];
           //s = s + a[j][i];
        }
        printf("The sum of column number %i is %i\n", i + 1, s);
    }


    return 0;
}