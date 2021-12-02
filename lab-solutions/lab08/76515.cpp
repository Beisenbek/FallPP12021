#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>


using namespace std;

int main(){
  int n, a, sum = 0;
  cin >> n;
  set<int> v;

  for(int i = 0; i < n; i++){
    cin >> a;
    v.insert(a);
  }

  for(set<int>::iterator it = v.begin(); it != v.end(); it++)
    sum += *it;

  cout << sum << endl;

  return 0;
}