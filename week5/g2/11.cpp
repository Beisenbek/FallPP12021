#include <iostream>

using namespace std;

int main(){

    string s;
    getline(cin, s);

    s.erase(0, 2);
    //hello
    //01234

    cout << s << endl;

    return 0;
}
