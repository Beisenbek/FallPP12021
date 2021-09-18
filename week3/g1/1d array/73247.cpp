#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;


int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int m;
    cin >> m;
    int b[m];

    for(int i = 0; i < m; ++i){
        cin >> b[i];
    }

    int i = 0;
    int j = 0;

    while(i < n && j < m){
        if(a[i] < b[j]){
            cout << a[i] << " ";
            i++;
        }else{
            cout << b[j] << " ";
            j++;
        }
    }

    if(i < n){
        for(int k = i; k < n; ++k){
            cout << a[k] << " ";
        }
    }else{
        for(int k = j; k < m; ++k){
            cout << b[k] << " ";
        }
    }

    return 0;
}