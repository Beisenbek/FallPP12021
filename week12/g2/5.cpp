#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
//n!
int main(){

    vector<int> v;

    for(int i = 5; i >= 1; --i){
        v.push_back(i);
    }

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    cout << endl;

    while(prev_permutation(v.begin(), v.end())){
        for(int i = 0; i < v.size(); ++i){
            cout << v[i] << " ";
        }
        cout << endl;
    }


    return 0;
}