#include <iostream>

using namespace std;

//tail recursion
string toBin(int n, string res){
    if(n == 0) return res;
    return toBin(n / 2,  char(n % 2 + 48)+ res);
}

int main(){

    int x;
    cin >> x;

    cout << toBin(x, "") << endl;

    return 0;
}