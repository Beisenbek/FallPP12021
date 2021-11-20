#include <iostream>
#include <set>

using namespace std;

typedef multiset<int> :: iterator It;

int main(){

    multiset<int> ms;

    int n;
    for(int i = 0; i < 10; ++i){
        ms.insert(i);
        ms.insert(i);
        ms.insert(i);
    }

    int x;
    cin >> x;
    pair<It, It> result = ms.equal_range(x);

    ms.erase(result.first, result.second);

    It it;
    for(it = ms.begin(); it != ms.end(); ++it){
        cout << *it << " ";
    }


    return 0;
}