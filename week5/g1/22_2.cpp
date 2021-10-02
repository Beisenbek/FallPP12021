#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){

    string email;
    cin >> email;

    size_t p = email.find("@");

    if(p!=string::npos){
        string login = email.substr(0, p);
        cout << login << endl;
        cout << email << endl;
    }else{
        cout << "string wrong format";
    }

    return 0;
}

//insert
//append