#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;


int main()
{
    // int n;
    // cin >> n;
    // int a[n];
    // for(int i = 0; i < n; i++){
    //     cin >> a[i];
    // }
    // for(int i = 0; i < n; i++){
    //     if(i >= n){
    //         a[i] = a[i + n];
    //     }
    //     else{
    //         a[n - 2 + i] = 
    //     }
    // }
    double n; cin >> n;
    char z; int c; cin >> z;
    if(z == 'k'){
        cin >> c;
        stringstream ss;
        ss << "%." << c << "f";
        //cout << fixed << setprecision(c) << n / 1024;
        printf(ss.str().c_str(),n/1024);
    }
    if(z == 'b'){
        cout << n * 1024;
    }
    return 0;
}