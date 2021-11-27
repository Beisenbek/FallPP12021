#include <iostream>

using namespace std;

struct student{
public:
    string first;
    string last;
    student(string _gpa, string _first,string _last){
        gpa = _gpa;
        first = _first;
        last = _last;
    }
    string getFullInfo(){
        return first + " " + last + " "  + gpa;
    }
private:
    string gpa;
};

int main(){

    student * s1 = new student("3.4","John","Bob");
    cout << s1->getFullInfo() << endl;


    return 0;
}