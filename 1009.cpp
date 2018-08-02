#include<iostream>
#include<iomanip>
using namespace std;

main(){
	string a;
	double b,c,d;
	cin>>a;
	cin>>b>>c;
	d=b+((c*15)/100);
	cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<d<<endl;
	return 0;
}
