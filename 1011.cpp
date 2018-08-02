#include<iostream>
#include<iomanip>
using namespace std;

main(){
	double pi= 3.14159;
	int r;
	cin>>r;
	double result=(4.0/3.0)*pi*r*r*r;
	cout<<fixed<<setprecision(3)<<"VOLUME = "<<result<<endl;
	return 0;
}
