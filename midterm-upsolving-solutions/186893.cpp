#include <iostream>
#include <bits/stdc++.h>
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
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        string str = to_string(i);
        for(int j = 0; j < str.size(); j++){
            if(str[j] == '5'){
                cout << str << " ";
                break;
            }
        }
    }
    return 0;
}
