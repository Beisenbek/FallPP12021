#include <iostream>
#include <map>

using namespace std;


int main(){

    pair<string, pair<double, int> > p = make_pair("Student A",make_pair(3.4, 1));

    cout << p.first << ": " << p.second.first << " " << p.second.second << endl;
    

    return 0;
}
