#include <iostream>

using namespace std;

int sum(int n){
    int s = 0;
    do{
        s += n % 10;
        n /= 10;
    }while(n > 0);
    return s;
}

bool isLucky(int n){
    int d = n % 10;
    int s = sum(n);
    if(s % d == 0) return true;
    return false;
}

bool isLucky2(int n){
    return sum(n) % (n % 10) == 0;
}

int main(){

    int n;
    cin >> n;

    if(isLucky(n)) cout << "Yes";
    else cout << "No";

     if(isLucky2(n)) cout << "Yes";
    else cout << "No";

    return 0;
}
