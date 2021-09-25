#include <iostream>

using namespace std;

int main (){

    int n;

    cin >> n;

    int a[n][n];


    int val = 1;

    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};
    
    int k = 0;

    int e = 0; 
    int q[2 * n - 1];
    q[e] = n - 1;

    for(int w = n - 1; w >=1; --w){
        for(int o = 1; o <= 2; ++o){
            q[++e] = w;
        }
    }

    e = 0;
    int i = 0;
    int j = 0;

    while(val <= n *n){
        for(int o = 1; o <= q[e]; ++o){
            a[i][j] = val++;
            i = i + dr[k];
            j = j + dc[k];
            if(val > n *n ) break;
        }
        k = (k + 1) % 4;
        e = e + 1;
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    
    return 0;

}   