#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool CheckCoordinates(int x, int y, int n, int m) {
    return 0 <= x && x < n && 0 <= y && y < m;
}

int main() {
    int n, m;
    cin >> n >> m;
    int field[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            field[i][j] = 0;
        }
    }

    int k;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        int x, y;
        cin >> x >> y;
        field[x][y] = -1;
        for (int dx = -1; dx <= 1; ++dx) {
            for (int dy = -1; dy <= 1; ++dy) {
                int xx = x + dx, yy = y + dy;
                if (CheckCoordinates(xx, yy, n, m) && field[xx][yy] != -1) {
                    field[xx][yy] += 1;
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int cell = field[i][j];
            cout << (cell == 0 ? "." : cell == -1 ? "*" : to_string(cell)) << ' ';
        }
        cout << endl;
    }

    return 0;
}
