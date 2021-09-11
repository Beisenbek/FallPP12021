#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = n; i > 0; i = i - 1){
        if(i % 2 != 0){
            continue;
        }
        cout << i << " ";
    }
    
    return 0;
}