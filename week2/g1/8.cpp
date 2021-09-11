#include <iostream>

using namespace std;

int main(){

   int x;

   cin >> x;

   if(x % 2 == 0 and x % 3 == 0){
       cout << "YES\n";
   }else{
       cout << "NO\n";
   }
       
   return 0;
}