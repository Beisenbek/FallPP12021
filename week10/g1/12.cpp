#include <iostream>
#include <map>

using namespace std;


int main(){

    map<string, pair<string, string> > m;

    m.insert(make_pair("John", make_pair("Smith", "Petrovich")));

    map<string, pair<string, string> > :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).second.first << " " << (*it).first  <<  " "  <<(*it).second.second << endl;
    }

    return 0;
}
