#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;


int main(){

    int n, x;
    cin >> n;
    int i = 0;

    for(;; ++i){
        if(i >= n) {
            break;
        }
        cin >> x;
        cout << x << " ";
    }
    
    return 0;
}