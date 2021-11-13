#include <iostream>
#include <vector>

using namespace std;


int main(){


    vector<int> v;

    int n, x;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x % 2 == 0){
            v.push_back(x);
        }
    }

    v[0] = 100;

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }



    return 0;
}