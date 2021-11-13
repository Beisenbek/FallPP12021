#include <iostream>
#include <map>

using namespace std;


int main(){

    map<string, int> m;

    m["orange"] = 55;
    m.insert(make_pair("apple", 40));


    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }


    return 0;
}