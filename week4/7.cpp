//https://informatics.msk.ru/mod/statements/view.php?id=282&chapterid=356#1
#include <iostream>

using namespace std;

int main (){

    int n, m;

    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }

    int d[n];

    for(int i = 0; i < n; ++i){
        d[i] = 0;
        for(int j = 0; j < m; ++j){
            d[i] = d[i] + a[i][j];
        }
    }

    int pos = 0;
    int val = d[0];
    for(int i = 1; i < n; ++i){
        if(val < d[i]){
            val = d[i];
            pos = i;
        }
    }

    cout << val << endl << pos << endl;

    
    return 0;

} 