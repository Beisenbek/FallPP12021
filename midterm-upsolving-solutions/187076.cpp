#include<iostream>
using namespace std;
int main()
{
    int decimalNum, binaryNum[100000], i=0;
    cin>>decimalNum;
    while(decimalNum!=0)
    {
        binaryNum[i] = decimalNum%2;
        i++;
        decimalNum = decimalNum/2;
    }
    int cnt = 0;
    int cnt1 = 0;
    for(i=(i-1); i>=0; i--){
        cout << binaryNum[i];
        if(binaryNum[i] == 0)
            cnt++;
        else 
            cnt1++;
    }
    
    cout<<endl;
    cout << "zeros" << " " << cnt << endl;
    cout << "number of units" << " " << cnt1; 
    return 0;
}