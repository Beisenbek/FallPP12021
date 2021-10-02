#include <iostream>

using namespace std;

int main(){

    string s;

    getline(cin, s);

    string x;
    cin >> x;

    if(s.find(x) == string::npos){
        cout << "not found!" << endl;
    }else{
        cout << "found!" << endl;
    }

    
    return 0;
}