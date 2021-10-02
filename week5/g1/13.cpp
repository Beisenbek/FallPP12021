#include <iostream>
#include <cmath>
using namespace std;

int main(){

    string s = "49";
    string t = "1";
    

    int s1 = 0;
    int t1 = 0;
    int k = 1;

    for(int i = s.size() - 1; i >= 0; --i){
        int d = int(s[i]) - int('0');
        s1 += d * k;
        k = k * 10;
    }  

    k = 1;

    for(int i = t.size() - 1; i >= 0; --i){
        int d = int(t[i]) - int('0');
        t1 += d * k;
        k = k * 10;
    }    

    cout << s1 + t1 << endl;
    cout << s + t << endl;


    return 0;
}