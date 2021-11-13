#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> & v2){
    cout << &v2 << endl;
    v2.push_back(100);
    cout << v2.size() << endl;
    vector<int> :: iterator it;
}

int main(){

    vector<int> v;

    int n, x;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }

    cout << &v << endl;
    print(v);

    cout << v.size() << endl;

    

    return 0;
}
