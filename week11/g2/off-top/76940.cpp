#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    int n;
    cin >> n;

    string phone;

    for(int i = 0; i < n; ++i){
        cin >> phone;
        m[phone]++;
    }

    map<string, int> :: iterator it;
    int cnt = 0;
    for(it = m.begin(); it != m.end(); ++it){
        if(it->second == 3){
            cnt++;
        }
    }

    cout << cnt;


    return 0;
}