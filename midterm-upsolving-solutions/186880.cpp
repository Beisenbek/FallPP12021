#include <iostream>

using namespace std;

int main(){
    int month, day;
    cin >> month >> day;
    int remainder = 0;
    if(month >= 1 && month <= 12){
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            if(day < 1 || day > 31){
                cout << "Not correct";
                return 0;
            }
        } else if(month == 2){
            if(day < 1 || day > 28){
                cout << "Not correct";
                return 0;
            }
        } else{
            if(day < 1 || day > 30){
                cout << "Not correct";
                return 0;
            }
        }
        
        for(int i = 1; i < month; i++) {
            if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
                remainder += 31;
            else if(i == 2)
                remainder += 28;
            else    
                remainder += 30;
        }
        // cout << remainder << endl;
        remainder += day;
        
        cout << 365 - remainder + 1;
        
    }
    else
        cout << "Not correct";

return 0;
}