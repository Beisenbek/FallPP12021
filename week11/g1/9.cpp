#include <iostream>
#include <map>

using namespace std;

int main(){

    multimap<char, int> mm;

    mm.insert(make_pair('a',1));
    mm.insert(make_pair('a',2));
    mm.insert(make_pair('a',3));
    mm.insert(make_pair('b',1));
    mm.insert(make_pair('b',2));

/*
    a->1
    a->2
    a->3
    b->1
    b->2
*/

    char c;
    cin >> c;

    pair<multimap<char, int>::iterator, multimap<char, int>::iterator > res = mm.equal_range(c);


    multimap<char, int>::iterator it;

    for(it = res.first; it != res.second; ++it){
        cout << it->first << " " << it-> second << endl;
    }


    return 0;
}