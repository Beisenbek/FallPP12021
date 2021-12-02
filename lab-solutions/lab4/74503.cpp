#include<iostream>
using namespace std;

int main()
{
    int  n;                      	 
    cin >> n;
    int arr[n][n];
    int i,j;
    for(i=0;i<n;i++)
    {
    	for (j=0; j<n; j++)
    	{
        	cin>>arr[i][j];
   	}
    }
    int max = arr[0][0];
    int imax = 0;
    int jmax = 0;
    for (int i = 0; i <n; ++i)
    {
    	if (arr[i][i] >max)
    	{
        	max = arr[i][i];
        	imax = i;
        	jmax = i;
        	}
     }
     cout << "Maximum element is: " <<max<<" with coordinates: "<<imax+1<<";"<<jmax+1;
return 0;
}
