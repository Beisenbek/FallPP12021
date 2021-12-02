#include <iostream>
using namespace std;
int main()
{
    int n;
        cin>>n;
    int a[n];
    a[0]=2;
            for(int i = 1 ; i < n ; i++)
            {
                a[i]=a[i-1] + 3;
            }

            for(int i = 0 ; i < n ; i++)
                cout<<a[i]<<" ";

    return 0;
}