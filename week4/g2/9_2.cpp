//lab 3 M.
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

    int x, s = 0;

    int a[1000000];
    int index = 0;

    while(cin >> x){
        a[index++] = x;
    }

    
    for(int i = 0; i < index; ++i){
        s += a[i];
    }

    cout << s << endl;



    return 0;
}