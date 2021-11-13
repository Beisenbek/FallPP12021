#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int x){
    if(x == 1) return false;
    int cnt = 0;
    for(int i = 1; i <= x; ++i){
        if(x % i == 0){
            cnt++;
        }
    }
    if(cnt == 2) return true;
    return false;
}


int main(){

    vector<int> v;
    int n, x;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    int res = 0;

    for(int i = 0; i < n; ++i){
        if(isPrime(v[i]) && v[i] >= k){
            res++;
        }
    }

    cout << res << endl;
    

    return 0;
}