#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  int n, x, a;
  cin >> n;
  vector<int> v;

  for(int i = 0; i < n; i++){
    cin >> a;
    v.push_back(a);
  }
  cin >> x;

  v.erase(v.begin()+x);

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";


  return 0;
}