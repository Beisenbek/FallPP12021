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
            cin >> a[i][j];
        }
    }

    int m1 = a[0][0];
    int m2 = a[0][0];

    int cnt = 0;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(a[i][j] > m1){
                m2 = m1;
                m1 = a[i][j];
            }else if(a[i][j] > m2 && a[i][j] < m1){
                m2 = a[i][j];
            }
            if(a[i][j] == a[0][0]){
                cnt++;
            }
        }
    }

    if(cnt == n * n){
        cout << "0" << endl;
    }else{
        cout << m2 << endl;
    }

    return 0;
}