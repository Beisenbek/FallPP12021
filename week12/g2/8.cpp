#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct student{
    double gpa;
    string first;
    string last;
    student(){
        gpa = 0;
        first = "N/A";
        last = "N/A";
    }
    student(double _gpa, string _first,string _last){
        gpa = _gpa;
        first = _first;
        last = _last;
    }
    void printFullInfo(){
        cout << last << " " << first << " "  << gpa << endl;
    }
};

bool f(student s1, student s2){
    if(s1.gpa > s2.gpa) return true;
    return false;
}

int main(){

    vector<student> v;

    string first, last;
    double gpa;

    while(cin >> first >> last >> gpa){
        student s(gpa, first, last);
        v.push_back(s);
    }

    sort(v.begin(), v.end(), f);

    for(int i = 0; i < v.size(); ++i){
        v[i].printFullInfo();
    }
 
    return 0;
}

