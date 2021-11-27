#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct student{
public:
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
    bool operator >(student other){
        if(this->gpa > other.gpa) return true;
        return false;
    }
    student operator +(student other){
        student res(this->gpa + other.gpa, this->first, other.last);
        return res;
    }
private:
    double gpa;
};

bool f(student s1, student s2){
    if(s1 > s2) return true;
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

    (v[0] + v[1]).printFullInfo();
 
    return 0;
}

