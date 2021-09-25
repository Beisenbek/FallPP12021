#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n][n];


    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            a[i][j] = 0;
        }
    }


    int q[n];
    int r = 1;
    int l = 0;
    q[0] = n - 1;

    for(int i = 1; i < n; ++i){
        for(int j = 0; j < 2; ++j){
            q[++l] = n - r;
        }
        r = r + 2;
    }

    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    int t = 0;

    int x = 0;
    int y = 0;
    a[x][y] = 1;

    for(int b = 0; b < n; ++b){
        for(int j = 1; j <= q[b]; ++j){
            x = x + dx[t];
            y = y + dy[t];
            a[x][y] = 1;
        }
        t = (t + 1) % 4;
    }



    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << a[i][j];
        }
        cout << endl;
    }




    return 0;
}