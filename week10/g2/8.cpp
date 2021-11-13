#include <iostream>
#include <set>

using namespace std;


int main(){

    set<string> s;

    string x;
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        s.insert(x);
    }

    set<string> :: iterator it;

    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }


    return 0;
}