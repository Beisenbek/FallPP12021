#include <iostream>
#include <set>

using namespace std;

int main(){

    multiset<int> ms;

    for(int i = 0; i < 10; ++i){
        ms.insert(i + 1);
        ms.insert(i + 1);
    }

    pair <multiset<int> :: iterator, multiset<int> :: iterator> res = ms.equal_range(5);

    multiset<int> :: iterator it;
    for(it = res.first; it != res.second; ++it){
        cout << *it << endl;
    }


    return 0;
}