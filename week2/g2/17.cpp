#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;


int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n, x;

    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        cout << x << " ";
    }
    
    return 0;
}