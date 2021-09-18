#include <iostream>

using namespace std;


int main(){

    int n, x, d = 0;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        do{
            if(x % 10  == 0) d = d + 1;
            x = x / 10;
        }while(x > 0); 
    }

    cout << d << endl;

    return 0;
}