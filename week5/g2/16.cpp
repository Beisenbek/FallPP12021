#include <iostream>

using namespace std;

int main(){

    string s;

    getline(cin, s);

    string x;
    cin >> x;
    size_t cnt = 0;
    size_t pos = 0;

    do{
       pos = s.find(x, pos);
       if(pos != string::npos){
           cnt++;
           pos = pos + 1;
       }
    }while(pos != string::npos);

    cout << cnt << endl;

    
    return 0;
}