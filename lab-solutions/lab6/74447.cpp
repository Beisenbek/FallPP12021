#include <iostream>
using namespace std;

char toUpper(char a) { // takes one parametr English character 
    if (a >= 'A' && a <= 'Z')
        return a;
    int x = a - 'a';
    return char (x + 'A');
    // returns char upper case English character
}
int main () {
    char c;
    cin >> c;
    cout << toUpper(c);
    return 0;
}