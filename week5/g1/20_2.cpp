#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){

    string s;
    string t;
    cin >> s >> t;

    int cnt = 0;
    size_t pos = 0;

    do{
        pos = s.find(t, pos);
        if(pos != string::npos){
            cnt++;
            pos++;
        }
    }while(pos != string::npos);

    cout << cnt << endl;
  

    return 0;
}