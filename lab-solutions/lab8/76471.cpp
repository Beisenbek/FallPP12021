#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  int n, x, y, a;
  cin >> n;
  vector<int> v;

  for(int i = 0; i < n; i++){
    cin >> a;
    v.push_back(a);
  }
  cin >> x >> y;

  v.erase(v.begin() + x, v.begin() + y + 1);

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";


  return 0;
}