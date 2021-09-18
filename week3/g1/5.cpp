#include <iostream>

using namespace std;

int main(){

    string pwd;
    string login;
    do{
        cout << "Please, enter credentials:" << endl;
        cin >> login >> pwd;
    }//while(!(login == "admin" && pwd == "admin"));
    while(login != "admin" || pwd != "admin");

    cout << "Success!" << endl;

    return 0;
}