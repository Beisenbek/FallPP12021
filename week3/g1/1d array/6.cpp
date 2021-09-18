#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

//int ax[1000000000000000];

int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int m = INT_MAX;

    for(int i = 0; i < n; ++i){
        m = min(m, a[i]);
    }

    cout << m << endl;

    return 0;
}