#include <iostream>
using namespace std;

int n;
int ans = 0;
int cnt = 0;
int main()
{
	cin>>n;

	for(int i=0;i<n;i++)
	{
        int x;
        cin>>x;
        cnt = 0;
        while(x!=0)
        {
            int r = x%10;
            if(r==0) cnt++;
            x/=10;
        }
        ans += cnt;
	}

    cout<<ans<<endl;
}
