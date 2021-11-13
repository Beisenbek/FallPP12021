#include <iostream>
#include <map>

using namespace std;


int main(){

    pair<string, int> p = make_pair("orange",30);


    pair<string, int> p2;
    p2.first = "apple";
    p2.second = 10;

    cout << p.first << " " << p.second << endl;
    cout << p2.first << " " << p2.second << endl;
    

    return 0;
}
