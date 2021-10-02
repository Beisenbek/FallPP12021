#include <iostream>

using namespace std;

int main(){

    string s;

    getline(cin, s);

    for(size_t i = 0; i < s.size(); ++i){
        cout << s[i] << " ";
    }

    return 0;
}