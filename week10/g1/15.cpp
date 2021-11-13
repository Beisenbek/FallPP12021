#include <iostream>
#include <map>

using namespace std;


int main(){

    map<string, int> m;
    string name;
    int count;
    while(cin >> name >> count){
        if(name == "end") break;
        if(count > 0){
            m[name] += count;
            cout << "ok" << endl;
        }else{
            if(m[name] < -count){
                cout << "wrong operation" << endl;
            }else{
                m[name] += count;
                cout << "ok" << endl;
            }
        }
    }

    return 0;
}
