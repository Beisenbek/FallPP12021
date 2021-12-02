#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s, t; cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t) cout << "Anagram";
    else cout << "Not anagram";
}