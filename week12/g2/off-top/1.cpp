#include <iostream>

using namespace std;

int main(){

    int n, k;
    cin >> n >> k;

    char base[36] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    string res = "";
    do{
        res = base[n % k] + res;
        n = n / k;
    }while(n > 0);

    cout << res << endl;
 
    return 0;
}

