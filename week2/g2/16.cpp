#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

int main(){

    int n;
    cin >> n;

    int s = 0;

    for(int i = n; i > 0; i = i - 1){
        if(i % 2 != 0){
            continue;
        }
        s = s + i;
    }

    cout << s << endl;
    
    return 0;
}