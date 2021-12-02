#include <iostream>
using namespace std;
 
int main () {
   int i, j;
   int n;
   cin>>n;
   
   for(i = 2; i<n; i++) {
  	for(j = 2; j <= (i/j); j++)
     	if(!(i%j)) break;
     	if(j > (i/j)) cout << i << " is prime\n";
   }
   
   return 0;
}

