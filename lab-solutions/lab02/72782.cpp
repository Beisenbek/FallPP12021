#include <iostream>
using namespace std;

int n;
int cnt0 = 0;
int cnt1 = 0;
int main()
{
	cin>>n;

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;

		if(x%2==0) cnt0++;
		else cnt1++;
	}

	cout<<cnt0<<" "<<cnt1<<endl;
}
