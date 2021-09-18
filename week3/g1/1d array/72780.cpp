#include <iostream>
#include <algorithm>

using namespace std;


int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int minV = a[0];
    int maxV = a[0];

    for(int i = 1; i < n; ++i){
        minV = min(minV, a[i]);
        maxV = max(maxV, a[i]);    
    }

    for(int i = 0; i < n; ++i){
        if(a[i] == maxV){
            a[i] = minV;
        }
    }

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }


    return 0;
}