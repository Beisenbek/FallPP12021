#include <iostream>

using namespace std;


int main(){

    int n, x, odd = 0, even = 0;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x % 2 == 0){
            even = even + 1;
        }else{
            odd = odd + 1;
        }
    }
    cout << even << " " << odd << endl;

    return 0;
}