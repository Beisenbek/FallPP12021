#include <iostream>

using namespace std;


int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int m = INT_MIN;

    for(int i = 0; i < n; ++i){
        if(m < a[i]){
            m = a[i];
        }
    }

    cout << m << endl;

    return 0;
}