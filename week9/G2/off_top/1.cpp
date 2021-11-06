#include <iostream>

using namespace std;

void f(int **a, int n, int m){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    int n, m;
    cin >> n >> m;
    int * ar[n];
    
    for(int i = 0; i < n; ++i){
        ar[i] = new int[m];
        for(int j = 0; j < m; ++j){
            cin >> ar[i][j];
        }
    }

    f(ar, n, m);

    return 0;
}