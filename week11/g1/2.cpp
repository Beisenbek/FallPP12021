#include <iostream>
#include <queue>

using namespace std;
queue<pair<int, int> > q;
int n, m;
int a[100][100];

void step(int x, int y, int t){
    if(x >= 0 && x < n && y >=0 && y < m){
        if(a[x][y] == -1){
            a[x][y] = t + 1;
            q.push(make_pair(x,y));
        }
    }
}

int main(){
    
    cin >> n >> m;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            a[i][j] = -1;
        }
    }

    int x,y;
    cin >> x >> y;
    a[x][y] = 0;
    q.push(make_pair(x,y));

    while(!q.empty()){
        pair<int, int> cur = q.front();
        int x = cur.first;
        int y = cur.second;
        q.pop();
        step(x + 1, y, a[x][y]);
        step(x - 1, y, a[x][y]);
        step(x, y + 1, a[x][y]);
        step(x, y - 1, a[x][y]);
    }


    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}