#include<iostream>
#include<iomanip>
using namespace std;
main(){
	int a,b;
	cin>>a>>b;
	double r=b/12.0;
	double result=a*r;
	cout<<fixed<<setprecision(3)<<result<<endl;
	return 0;
}
