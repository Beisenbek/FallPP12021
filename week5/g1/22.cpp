#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){

    string email;
    cin >> email;

    size_t p = email.find("@");

    if(p!=string::npos){
        string login = email.erase(p, email.size() - p);
        cout << login << endl;
    }else{
        cout << "string wrong format";
    }

    return 0;
}