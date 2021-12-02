#include <bits/stdc++.h>

using namespace std;
void sol(long long num){
    int res[num];
    if (num == 0) {cout << 0; return;}
    if (num == 1) {cout << 0 << 1; return;}
    res[num + 1];
    res[0] = 0; res[1] = 1; int index = 2;
    long long tmp = num; long long k = 0; 
    while (tmp/2>0) { tmp/=2; k ++;}
    
    for (int i = 1; i <= k; i ++)
    {
        long long limit = index;
        for (int j = 0; j < limit; j ++)
        {
            if (index == num+1) break;
            res[index] = 1 + res[j]; index++;
        }
    }
    for (int i = 0; i < num + 1; i++)
    {
        cout << res[i];
    }
    
    
}

int main(){
    long long n;
    cin >> n;
    sol(n);

    return 0;
}