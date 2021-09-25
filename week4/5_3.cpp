#include <iostream>

using namespace std;

int main (){

    int n, x;

    cin >> n;
    int m = -100001;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> x;
            m = max(x, m);
        }
    }

    cout << m << endl;

    
    return 0;

}   