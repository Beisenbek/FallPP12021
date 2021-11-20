#include <iostream>
#include <set>

using namespace std;

int main(){

    multiset<int> ms;

    for(int i = 0; i < 10; ++i){
        ms.insert(i + 1);
        ms.insert(i + 1);
    }

    multiset<int> :: iterator it;

    for(it = ms.begin(); it != ms.end(); ++it){
        cout << *it << " ";
    }
 


    return 0;
}