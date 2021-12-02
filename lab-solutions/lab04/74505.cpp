#include <iostream>
#include <string>
using namespace std;

int main(void) {
   int n;
   int iSpace;
   int iChars;

   cin >> n;

   for(int i = 0; i < n; i++){
      	iSpace = (n - i) - 1;
      	iChars = (2 * i) + 1;

      	for(int j = 0; j < iSpace; ++j){
        	cout << '.';
 	}

      	for(int j = 0; j < iChars; ++j){
      		cout << '*';
	}

	for(int j = 0; j < iSpace; ++j){
        	cout << '.';
 	}
	cout << endl;
   }

   return 0;
}