#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int x;

    int i = 0;

    for(;; i++){
        if(i >= n){
           break;     
        }
        cin >> x;
        cout << x << " ";
    }


    return 0;
}