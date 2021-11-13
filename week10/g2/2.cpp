#include <iostream>
#include <vector>

using namespace std;


int main(){


    int n, x;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; ++i){
        cin >> v[i];
        
    }

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }



    return 0;
}