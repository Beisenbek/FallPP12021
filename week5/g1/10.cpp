#include <iostream>

using namespace std;

int main(){

    string s = "test";

    int n = s.size();
    char buffer[n];

    s.copy(buffer, n, 0);
    buffer[n] = '\0';

    cout << buffer << endl;

    return 0;
}