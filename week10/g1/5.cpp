#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v;

    int n, x;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    vector<int> :: reverse_iterator it;

    for(it = v.rbegin(); it != v.rend(); ++it){
        cout << *it << " ";
    }
   

    return 0;
}
