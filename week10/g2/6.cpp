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


    sort(v.rbegin(), v.rend());
        
    vector<int> :: iterator it;

    for(it = v.begin(); it != v.end(); ++it){
        cout << *it << " ";
    }
  

    return 0;
}