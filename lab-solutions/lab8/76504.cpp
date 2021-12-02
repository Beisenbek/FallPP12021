#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;


int main(){
  int n, k, a, cnt = 0;
  cin >> n;
  vector<int> v;

  for(int i = 0; i < n; i++){
    cin >> a;
    v.push_back(a);
  }
  cin >> k;

  if(find(v.begin(), v.end(), k) != v.end())
    cout << "Yes";
  else
    cout << "No";


  return 0;
}