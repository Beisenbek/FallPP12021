#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool f(int x){
    return x % 4 == 0;
}

int main(){

    vector<int> v;

    for(int i = 0; i < 10; ++i){
        v.push_back(i);
    }

    int cnt = count_if(v.begin(), v.end(), f);

    cout << cnt << endl;

    return 0;
}