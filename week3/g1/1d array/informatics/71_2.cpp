#include <iostream>
#include <algorithm>
#include <limits.h>
#include <vector>

using namespace std;


int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    vector<int> v(a, a + n);

    rotate(v.begin(),v.end() - 1, v.end());

    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }

    return 0;
}