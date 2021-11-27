#include <iostream>
#include <vector>

using namespace std;

struct student{
public:
    string first;
    string last;
    
    student(double _gpa, string _first,string _last){
        gpa = _gpa;
        first = _first;
        last = _last;
    }
    void printFullInfo(){
        cout <<  first  <<  " "  << last  <<  " "  << gpa << endl;
    }
    bool operator > (student other){
        if(other.gpa < this->gpa) return true;
            return false;
    }
private:
    double gpa;
};


bool f(student s1, student s2){
    if(s1 > s2) return true;
    return false;
}

int main(){

    string first, last;
    double gpa;
    vector<student> students;

    while(cin >> first >> last >> gpa){
        student s(gpa, first, last);
        students.push_back(s);
    }

    sort(students.begin(), students.end(),f);
    
    for(int i = 0; i < students.size(); ++i){
        students[i].printFullInfo();
    }
    return 0;
}