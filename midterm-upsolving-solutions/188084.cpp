#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    cin >> a[0];
    for(int i=1; i<n; i++){
        cin >> a[i];
        if(a[i]>=a[i-1]){
            k--;
        }
        else k*=2;
    }

    cout << k << endl;
    return 0;
}