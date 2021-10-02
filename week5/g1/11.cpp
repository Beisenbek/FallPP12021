#include <iostream>

using namespace std;

int main(){

    string a = "apple";
    string b = "apple";
    string c = b;
    c[0] = 'o';

    if(a == c){
        cout << "equal\n";
    }else{
        cout << "not equal\n";
    }

    return 0;
}