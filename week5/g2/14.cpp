#include <iostream>

using namespace std;

int main(){

    string s;

    getline(cin, s);

    string x;
    cin >> x;

    if(s.find(x) == 18446744073709551615){
        cout << "not found!" << endl;
    }else{
        cout << "found!" << endl;
    }

    
    return 0;
}