#include <iostream>
using namespace std;
int main() {
    int cols,rows;
    cin >> cols >> rows;
    int a[cols][rows];
    for(int i = 0; i<cols; i++){
        for(int j = 0; j<rows; j++){
            cin >> a[i][j];
        }
    }
    int b[rows][cols];
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            b[i][j] = a[j][i];
        }
    }
    for(int i = 0; i < cols; i++){
        for(int j = 0; j <rows; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}