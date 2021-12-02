#include <iostream>
using namespace std;
 
int main()
{
    int cnt1 = 0, cnt2 = 0; 
    double sum = 0; 
    int x; 

    do {
        cin >> x;
        if (x >= 0) {
            sum++;
            if (x % 2 == 0)
                cnt1++;
            else 
                cnt2++;
        }
    } 
    while (x >= 0);
    
    printf("%.5f %.5f",(cnt1/sum) * 100, (cnt2/sum) * 100);

    return 0;
}