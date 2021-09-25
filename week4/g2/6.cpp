#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

    srand(time(NULL));

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i){
        a[i] = rand() % 100;
    }

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }



    return 0;
}