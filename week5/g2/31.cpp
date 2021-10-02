#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

    string s;
    cin >> s;

    for(size_t i = 0; i < s.size(); ++i){
        s[i] = toupper(s[i]);
    }

    cout << s << endl;

    return 0;
}