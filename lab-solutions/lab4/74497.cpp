#include <iostream>
using namespace std;
int main(){
	int n, m,i, j;
	cin >> n >> m;
	int arr[n][m];
	int r[n],c[m];
	for(i = 0; i < n; i++) {
    	for(j = 0 ; j < m; j++){
        	cin >> arr[i][j];
    	}
	}
 	for ( i=0; i<n; i++)
  	{
      	r[i]=0;
      	for ( j=0; j<m; j++)
          	r[i]+=arr[i][j];
   }
   
   for ( j=0; j<m; j++){
  	c[j]=0;
  	for ( i=0; i<n; i++)
      	c[j]+=arr[i][j];
   }
   for ( i=0; i<n; i++)
   	cout<<"The sum of row number "<<i+1<<" is "<<r[i] << endl;
   for ( j=0; j<m; j++)
   	cout<<"The sum of column number "<<j+1<<" is "<<c[j] << endl;
 
 return 0;
}
