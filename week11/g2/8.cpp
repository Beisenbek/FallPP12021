#include <iostream>
#include <map>

using namespace std;

int main(){

    multimap<char, int> mm;

    mm.insert(make_pair('a',1));
    mm.insert(make_pair('a',2));
    mm.insert(make_pair('a',3));
    mm.insert(make_pair('a',4));
    mm.insert(make_pair('b',1));
    mm.insert(make_pair('b',2));
    mm.insert(make_pair('b',3));
    mm.insert(make_pair('b',4));

    pair<multimap<char, int> :: iterator, multimap<char, int> :: iterator> result;

    char c;
    cin >> c;
    result = mm.equal_range(c);

    multimap<char, int> :: iterator it;

    for(it = result.first; it != result.second; ++it){
        //pair<char, int> cur = *it;
        //cout << cur.first << " " << cur.second << endl;
        cout << it->first << " " << it->second << endl;
    }



    return 0;
}