#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    
    string word1 = "";
    string word2 = "";

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < s[j].size(); i++)
        {
            word1 += s[j][i];
            word2 += s[j][i];
        }
        reverse(word1.begin(), word1.end());
        if(word1 == word2){
            cout << word1 << endl;
            cnt++;
        }
        word1 = "";
        word2 = "";
    }
    if(cnt == 0){
        cout << "NO";
    }
    return 0;
}