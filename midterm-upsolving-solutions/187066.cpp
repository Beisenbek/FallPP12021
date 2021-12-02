#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    if(n == 0 || m == 0){
        cout << "error";
        return 0;
    }
    string s[n];
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = 0;
    }
    int cnt = 0;
    string name = "";
    int ans = 0;
    for (int i = 0; i < n; i++) {
        string st;
        cin >> st;
        s[i] = st;
        for(int j = 0; j < m; j++){
            int l; cin >> l;
            a[i] += l;
        }
        if(ans < a[i]){
            ans = a[i];
            name = st;
        }
        
    }
    cnt = 0;
    for(int i = 0; i < n; i++){
        cout << s[i] << " - " << a[i] << endl;
    }
    cout << "The best:" << endl;
    cout << name << " " << ans;
    return 0;
}