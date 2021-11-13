#include <iostream>
#include <map>

using namespace std;


int main(){

    map<string, int> m;

    m["orange"] = 55;
    m["orange"] = 20;
    m["orange"] = 10;

    m.insert(make_pair("apple", 40));
    m.insert(make_pair("apple", 10));
    m.insert(make_pair("apple", 20));


    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        pair<string, int> p = *it;
        cout << p.first << " " << p.second << endl;
    }


    return 0;
}