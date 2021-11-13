#include <iostream>
#include <map>

using namespace std;


int main(){

    map<string, int> m;

    m["orrange"] = 12;
    m["orrange"] = 20;
    m["orrange"] = 30;

    m.insert(make_pair("apple",10)); 
    m.insert(make_pair("apple",20)); 
    m.insert(make_pair("apple",30)); 

    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}
