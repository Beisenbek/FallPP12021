#include <iostream>

using namespace std;

void read(int a[], int n){
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
}

void print(int a[], int n){
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

int count(int a[], int b[], int n){
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(a[i] == b[j]){
                cnt++;
                b[j] = -100;
                break;
            }
        }
    }
    return cnt;
}

int main(){

    int n;
    cin >> n;
    int a[n], b[n];

    read(a, n);
    read(b, n);

    cout << count(a, b, n) << endl;

    return 0;
}
