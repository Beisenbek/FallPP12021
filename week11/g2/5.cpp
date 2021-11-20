#include <iostream>
#include <set>

using namespace std;

int main(){

    multiset<int> ms;

    int n;
    for(int i = 0; i < 10; ++i){
        ms.insert(i);
        ms.insert(i);
        ms.insert(i);
    }

    multiset<int> :: iterator it;

    for(it = ms.begin(); it != ms.end(); ++it){
        cout << *it << " ";
    }


    return 0;
}