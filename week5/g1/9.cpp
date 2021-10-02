#include <iostream>

using namespace std;

int main(){

    char c[] = {'h','e','l','l','o'};

    int n = sizeof(c)/sizeof(c[0]);

    cout << n << endl;

    string str(c);

    str[n] = '\0';

    cout << str << endl;

   
    


    return 0;
}