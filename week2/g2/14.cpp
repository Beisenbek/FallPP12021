#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

int main(){

    for(int i = 0; i < 100; ++i){
        if(i % 2 == 0){
            cout << i << " ";
        }
    }
    
    return 0;
}