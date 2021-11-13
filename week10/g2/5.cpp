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

    
    vector<int> :: iterator it;

    for(it = v.begin(); it != v.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    vector<int> :: reverse_iterator it2;

    for(it2 = v.rbegin(); it2 != v.rend(); ++it2){
        cout << *it2 << " ";
    }
    cout << endl;


    for(it = v.begin(); it != v.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}