#include <iostream>

using namespace std;

int main()
{
    int width;
    
    cin >> width;

	for (int i = 1; i <= width; i++) {
		for (int j = 1; j <= i; j++) 
			cout << "[*]";
		cout << "\n";
	}
    return 0;  
}
