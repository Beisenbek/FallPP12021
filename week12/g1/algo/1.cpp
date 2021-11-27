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
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }

    int cnt = count_if(v.begin(), v.end(), isEven);

    cout << cnt << endl;


    return 0;
}