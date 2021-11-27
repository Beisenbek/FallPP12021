#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void f(int x){
    cout << 2 * x << " ";
}

int main(){

    vector<int> v;

    for(int i = 0; i < 10; ++i){
        v.push_back(i);
    }

    for_each(v.begin(), v.end(), f);

    return 0;
}