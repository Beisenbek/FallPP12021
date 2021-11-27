#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    vector<int> v;

    for(int i = 0; i < 10; ++i){
        v.push_back(i);
    }

    int x;
    cin >> x;

    rotate(v.begin(), v.begin() + x, v.end());

    for(int i = 0; i < 10; ++i){
        cout << v[i] << " ";
    }

    return 0;
}