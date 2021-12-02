#include <iostream>
#include <string>
#include <bitset>
#define ll long long
#define pb push_back
#define vi vector<int>
#define sz(a) (int((a).size()))
#define mp make_pair
#define f first
#define s second
#define pii pair<int, int>

using namespace std;


int n;
int res;

int main() {
	cin >> n;
    bitset<8> res(n);
	string s = res.to_string<char, char_traits<char>, allocator<char> >();
    for(int i=0; i<=s.size()/2; i++){
        if (s[i] != s[s.size() - 1 - i]){
            cout << "Sad" << endl;
            return 0;
        }
    }
    cout << "It works!" << endl;

	return 0;
}
