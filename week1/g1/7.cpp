#include <iostream>

using namespace std;

int main(){

   int n;
   cin >> n;

   int a = n % 2;
   n = n / 2;
   int b = n % 2;
   n = n / 2;
   int c = n % 2;
   n = n / 2;
   int d = n % 2;
   n = n / 2;

   int res = 8 * a + 4 * b + 2 * c + d;

   cout << res << endl;

   //sqrt


    return 0;
}