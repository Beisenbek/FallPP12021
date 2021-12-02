#include<iostream>
using namespace std;

int main()
{
    int  n;                      	 
    cin >> n;
    int arr[n][n];
    int i,j,sum=0;
    for(i=0;i<n;i++)
    {
    	for (j=0; j<n; j++)
    	{
        	cin>>arr[i][j];
   	}
    }

    for(i=0;i<n;i++)
    {j=n-1-i; sum+=arr[i][j];}
     cout << sum;
return 0;
}
