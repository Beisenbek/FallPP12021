#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

bool isEven(int x){
    return x % 2 == 0;
}

int main(){

    vector<int> v;
    int x;

    for(int i = 0; i < 10; ++i){
        v.push_back(i);
    }

    for(int i = 0; i < 10; ++i){
        cout << v[i] << " ";
    }

    cout << endl;

    rotate(v.begin(), v.begin() + 7,  v.end());

    for(int i = 0; i < 10; ++i){
        cout << v[i] << " ";
    }

    return 0;
}