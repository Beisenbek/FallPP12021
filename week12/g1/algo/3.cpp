#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

void print(int x){
    cout << 2 * x << " ";
}

int main(){

    vector<int> v;
    int x;

    for(int i = 0; i < 10; ++i){
        v.push_back(i);
    }

    for_each(v.begin(), v.end(), print);

    return 0;
}