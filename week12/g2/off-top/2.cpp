#include <iostream>

using namespace std;
char base[36] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

string f(int n, int k, string res){
    if(n == 0) return res;
    return f(n / k, k, base[n % k] + res);
}

int main(){

    int n, k;
    cin >> n >> k;

    if(n == 0) cout << 0;
    else cout << f(n, k, "");
 
    return 0;
}

