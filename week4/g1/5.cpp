#include <iostream>

using namespace std;

int main (){

    int n;

    cin >> n;

    int a[n][n];

    int m = -100001;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(a[i][j] > m){
                m = a[i][j];
            }
        }
    }

    cout << m << endl;

    
    return 0;

}   