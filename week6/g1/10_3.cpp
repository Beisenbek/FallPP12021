#include <iostream>

using namespace std;


int sum(int a[], int n){
    int res = 0;

    for(int i = 0; i < n; ++i){
        res += a[i];
    }

    return res;
}

void print_sum(int a[], int n){
    cout << sum(a, n) << endl;
}


void read(int a[], int n){
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
}


int main(){

    int n;
    cin >> n;
    int a[n];

    read(a, n);
    print_sum(a, n);

    return 0;
}