#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  float n;
  float money = 0;
  cin >> n;
  int cnt = 0;
  while (money < 500000)
  {
    money += ((n / 100) * 30);
    n += ((n / 100) * 10);
    cnt++;
  }
  cout << cnt;

  return 0;
}