#include <iostream>
#include <map>

using namespace std;


int main(){

    pair<string, int> p = make_pair("orange", 50);

    pair<string, int> p2;
    p2.first = "apple";
    p2.second = 40;

    cout << p.first << " " << p.second << endl;
    cout << p2.second << " " << p2.first << endl;


    return 0;
}