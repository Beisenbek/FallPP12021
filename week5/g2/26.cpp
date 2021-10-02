#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>



using namespace std;

int main(){
    int x;
    cin >> x;

    string s = "";

    do{
        s = char(x % 10 + 48) + s;
        x = x / 10;
    } while(x > 0);

    cout << s << endl;
   

    return 0;
}