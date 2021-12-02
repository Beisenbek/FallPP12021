#include <iostream>

using namespace std;

int main(){
	int n, k;
    cin >> n >> k;
    if(n <= k){
        cout << 2;
    }
    else{
        
        if((2 * n) % k == 0){
            cout << (2 * n) / k;
        }
        else{
            cout << (((2 * n) / k) + 1);
        }

    }
    
return 0;}