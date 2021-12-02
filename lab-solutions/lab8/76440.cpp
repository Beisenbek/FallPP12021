#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int n, x, y;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++)
    cin >> a[i];
  cin >> x >> y;

  reverse(a + x, a + y + 1);

  for(int i = 0; i < n; i++)
    cout << a[i] << " ";


  return 0;
}