#include <iostream>

 using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int a[n][m],summa=0,min,x,y;
	for (int i=0;i<n;i++)
	{
    	for (int j=0;j<m;j++)
    	{
        	cin >> a[i][j];
        	}
	}
	cout << "coordinates of min elements: \n";
	for (int j=0;j<m;j++)
	{
    	min=a[0][j];
    	x=1;
    	y=j+1;
    	for (int i=0;i<n;i++)
    	{
        	if (a[i][j]<min)
        	{
            	min=a[i][j];
            	x=i+1;
            	y=j+1;
        	}
    	}
	summa+=min;
	cout << x << ";" << y << endl;
	}
	cout << "\nTheir sum:\n";
	cout << summa;
	return 0;
}
