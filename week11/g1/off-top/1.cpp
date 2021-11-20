#include <iostream>
#include <set>

using namespace std;

int a[101][101];
int res;

void sum(int i, int j, int n, int m){
    if(i >= 0 && j >= 0 && i < n && j < m){
        if(a[i][j] != -1){
            res += a[i][j];
            a[i][j] = -1;
            sum(i + 1, j, n, m);
            sum(i - 1, j, n, m);
            sum(i, j + 1, n, m);
            sum(i, j - 1, n, m);
        }
    }
}

int main(){

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }

    res = 0;
    sum(0, 0, n, m);

    cout << res << endl;

    return 0;
}