#include<iostream>
#include<iomanip>
using namespace std;
main(){
	double a,b;
	cin>>a>>b;
	double result=((a*3.5)+(b*7.5))/(3.5+7.5);
	cout<<fixed<<setprecision(5)<<"MEDIA = "<<result<<endl;
	return 0;
}
