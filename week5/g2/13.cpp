#include <iostream>

using namespace std;

int main(){

    string s;

    getline(cin, s);

    string x;
    cin >> x;

    cout << s.find(x) << endl;

    
    return 0;
}