#include <iostream>
#include <sstream>

using namespace std;

int main(){

    stringstream ss;

    int x = 123;
    string s = "abc";
    char c = 't';

    ss << x << " "<< s  << " "<< c;

    string q;

    for(int i = 0; i < 3; ++i){
        ss >> q;
        cout << q << endl;
    }


    
    return 0;
}