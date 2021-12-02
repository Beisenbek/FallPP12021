#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>


using namespace std;

int main(){
  string s;
  cin >> s;
  set<int> v;

  for(int i = 0; i < s.size(); i++){
    v.insert(tolower(s[i]));
  }

  cout << v.size() << endl;
  
  for(set<int>::iterator it = v.begin(); it != v.end(); it++)
    cout << (char)*it << " ";

  cout << endl;

  return 0;
  
}