#include <iostream>
using namespace std;

int n;

int cnt = 0;
int main()
{
	cin>>n;

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;

		if(x%10==7) cnt++;
	}

    cout<<cnt<<endl;
}
