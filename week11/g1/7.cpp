#include <iostream>
#include <set>

using namespace std;

typedef multiset<int> :: iterator It;

int main(){

    multiset<int> ms;

    for(int i = 0; i < 10; ++i){
        ms.insert(i + 1);
        ms.insert(i + 1);
    }
    It it;
    int x;
    cin >> x;
    pair <It, It> res = ms.equal_range(x);


    for(it = ms.begin(); it != ms.end(); ++it){
        cout << *it << " ";
    }

    cout << endl;
    
    ms.erase(res.first, res.second);

    for(it = ms.begin(); it != ms.end(); ++it){
        cout << *it << " ";
    }


    return 0;
}