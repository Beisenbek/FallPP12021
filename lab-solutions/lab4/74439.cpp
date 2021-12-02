#include <iostream>
using namespace std;

int main()
{
    int n, m, drop = 10000, cnt = 0, subj;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            cin >> arr[i][j];
            
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cnt += arr[i][j];
        if(cnt < drop) {
            drop = cnt;
            subj = i;
        }
        cnt = 0;
    }
    cout << ++subj;
    return 0;  
}
