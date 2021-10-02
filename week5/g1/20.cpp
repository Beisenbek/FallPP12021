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

    for(int i = 0; i < s.size(); ++i){
        pos = s.find(t, pos);
        if(pos!= string::npos){
            cnt++;
            pos = pos + 1;
        }else{
            break;
        }
    }

    cout << cnt << endl;
  

    return 0;
}