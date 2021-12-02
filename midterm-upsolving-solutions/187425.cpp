// 2d array task1
#include <iostream>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++) 
            cin >> a[i][j];
    long long sum = 0;
    long long maxi = -100500;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum += a[i][j];
        }
        if(sum > maxi) maxi = sum;
        sum = 0;
    }
    cout << maxi;
    return 0;
}