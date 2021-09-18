#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;


int main(){

    int n;
    cin >> n;

    int a[n];
    int minV = INT_MAX;
    int maxV = INT_MIN;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
        minV = min(minV, a[i]);
        maxV = max(maxV, a[i]);
    }

    for(int i = 0; i < n; ++i){
        if(a[i] == maxV){
            a[i] = minV;
        }
        cout << a[i] << " ";
    }

    return 0;
}