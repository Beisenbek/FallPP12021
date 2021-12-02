#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
	map<int,double> a;
	int n;
	cin>>n;
	int at1,at2,final,cr;
	double ksum = 0;
	for(int i = 0;i<50;i++){
		a[i] = 0;
	}
	double cnt = 1.0;
	for(int i = 50;i<100;i+=5){
		a[i] = cnt;
		a[i+1] = cnt;
		a[i+2] = cnt;
		a[i+3] = cnt;
		a[i+4] = cnt;
		cnt+=1.0/3.0;
	}
	a[100] = 4.0;
	double gpa = 0;
	for(int i = 0;i<n;i++){
		cin>>at1>>at2>>final>>cr;
		ksum+=cr;
		if(at1 + at2<30 || final<20){
			gpa+=a[0];
		}else{
			gpa+=(a[at1+at2+final] * cr);
		}
	}
	cout<<gpa/ksum<<endl;







	return 0;
}