#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

bool cmp(int a, int b){
  return a > b;
}

int main(){
  int n, a, k, sum = 0;
  cin >> n;
  vector<int> v;

  for(int i = 0; i < n; i++){
    cin >> a;
    v.push_back(a);
  }
  cin >> k;
  sort(v.begin(), v.end(), cmp);

  for(int i = 0; i < k; i++)
    sum += v[i];

  cout << sum << "\n";

  return 0;
}