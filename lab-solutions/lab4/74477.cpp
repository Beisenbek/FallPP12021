#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, m, y;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            cin >> arr[i][j];
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) {      
            y = sqrt(arr[i][j]);
            if (y * y == arr[i][j]) arr[i][j] = y;
        }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) 
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}
