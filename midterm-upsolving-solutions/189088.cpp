#include <iostream>
#include <vector>
using namespace std;
vector<int> check(int n)
{
    vector<int> ans(n + 1);
    ans[0] = 0;
    if (n == 0)
        return ans;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            ans[i] = ans[i / 2]; // no of set-bits in 4=no of set-bits in 2
        else
            ans[i] = ans[i - 1] + 1; // no of set-bits in 5=no of set bits in 4+ 1;
    }
    return ans;
}
int main()
{
    int a;
    cin >> a;
    vector<int> b = check(a);
    for (int i = 0; i < b.size(); i++)
    {
        if(i==b.size()-1)cout<<b[i];
        else
        cout<<b[i]<<",";
    }
    
    return 0;
}